int solve(TreeNode* root,int &ans){
        
        if(!root) return 0;
        
        int l=max(0,solve(root->left,ans));
        int r=max(0,solve(root->right,ans));
        
        ans=max(ans,l+r+root->val);
        
        return root->val+max(l,r);
        
    }
    int maxPathSum(TreeNode* root) {
        
        if(!root) return 0;
        
        int ans=INT_MIN;
        
        solve(root,ans);
        return ans;
        
    }
