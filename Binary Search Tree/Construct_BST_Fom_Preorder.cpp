// NOTE -> Rememebr to put & with idx and put idx==pre.size() condition before the pre[idx]<bound.


TreeNode* solve(vector<int>&pre,int& idx,int bound){ 
        
        if(idx==pre.size() || pre[idx]>bound) return NULL;
        
        TreeNode* root=new TreeNode(pre[idx]);
        idx++;
        
        root->left=solve(pre,idx,root->val);
        root->right=solve(pre,idx,bound);
        
        return root;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int idx=0;
        
        return solve(preorder,idx,INT_MAX);
        
    }
