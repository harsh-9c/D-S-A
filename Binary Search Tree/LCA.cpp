TreeNode* solve(TreeNode* root,TreeNode* p,TreeNode* q){
        
        if(!root || root==p || root== q) return root;
        
        
        auto l=solve(root->left,p,q);
        auto r=solve(root->right,p,q);
        
        if(l && r) return root;
        
        if(!l) return r;
        else return l;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        return solve(root,p,q);
        
    }
