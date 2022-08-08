TreeNode* solve(vector<int>&pre,int preStart,int preEnd,vector<int>&in,int inStart,int inEnd,map<int,int>&m){
        
        if(preStart>preEnd || inStart>inEnd) return NULL;
        
        
        TreeNode* root=new TreeNode(pre[preStart]);
        
        int idx=m[root->val];
        int numsLeft=idx-inStart;
        
        
        root->left=solve(pre,preStart+1,preStart+numsLeft,in,inStart,idx-1,m);
        root->right=solve(pre,preStart+numsLeft+1,preEnd,in,idx+1,inEnd,m);
        
        return root;       
        
    }
    
    TreeNode* buildTree(vector<int> &pre, vector<int> &in) {
        map<int,int>m;
        for(int i=0;i<pre.size();i++){
            m[in[i]]=i;
        }
        
        return solve(pre,0,pre.size()-1,in,0,in.size()-1,m);
        
    }
