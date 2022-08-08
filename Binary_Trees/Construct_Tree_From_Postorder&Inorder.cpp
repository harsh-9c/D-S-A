TreeNode* solve(vector<int>&post,int postStart,int postEnd,vector<int>&in,int inStart,int inEnd,map<int,int>&m){
        
        if(postStart>postEnd || inStart>inEnd) return NULL;
        
        TreeNode* root=new TreeNode(post[postEnd]);
        
        int idx=m[root->val];
        int numsLeft=idx-inStart;
        
        root->left=solve(post,postStart,postStart+numsLeft-1,in,inStart,idx-1,m);
        root->right=solve(post,postStart+numsLeft,postEnd-1,in,idx+1,inEnd,m);
        
        return root;
              
    }
    
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        
        map<int,int>m;
        for(int i=0;i<in.size();i++){
            m[in[i]]=i;
        }
        
        return solve(post,0,post.size()-1,in,0,in.size()-1,m);
        
    }
