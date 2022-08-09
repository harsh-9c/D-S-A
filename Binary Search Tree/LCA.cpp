TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(!root) return NULL;
        
        int cur=root->val;
        
        if(cur>p->val && cur>q->val) return lowestCommonAncestor(root->left,p,q);
        if(cur<q->val && cur<p->val) return lowestCommonAncestor(root->right,p,q);
        
        return root;
      
    }


