int height(TreeNode* root){
        if(!root) return 0;
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
    int maxDepth(TreeNode* root) {
        
        return height(root);
        
    }
