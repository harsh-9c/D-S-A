int solve(TreeNode* root,int &mx){
        if(!root) return 0;
        int l=solve(root->left,mx);
        int r=solve(root->right,mx);
        mx=max(mx,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int mx=0;
        
        solve(root,mx);
        return mx;
        
    }
