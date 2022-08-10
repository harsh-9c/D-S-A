int solve(TreeNode* root,int& k){
        if(!root) return 0;
        
        int l=solve(root->left,k);
        k--;
        if(k==0) return root->val;
        int r=solve(root->right,k);
        
        return max(l,r);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        return solve(root,k);
        
        
    }
