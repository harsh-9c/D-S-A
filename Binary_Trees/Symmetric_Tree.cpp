bool solve(TreeNode* l, TreeNode* r){
        if(!l) return !r;
        else if(!r) return !l;
        else if(l->val!=r->val) return false;
        
        return solve(l->left,r->right) && solve(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
        
        if(!root) return true;
        
        return solve(root->left,root->right);
        
    }
