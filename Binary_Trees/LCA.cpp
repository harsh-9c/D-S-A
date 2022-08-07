TreeNode* solve(TreeNode* root,TreeNode* p, TreeNode* q){
        
        if(!root || root==p || root== q) return root;
        
        TreeNode* l=solve(root->left,p,q);
        TreeNode* r=solve(root->right,p,q);
        
        if(l!=NULL && r!=NULL) return root;
        
        if(!l) return r;
        else return l;
        
        
               
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) { 
        
        return solve(root,p,q);
        
    }
