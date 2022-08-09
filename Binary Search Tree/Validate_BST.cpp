 #define ll long long
    bool solve(TreeNode* root,ll int l,ll int r){
        
        if(!root) return true;
        
        if(root->val<=l || root->val>=r) return false;
        
        return solve(root->left,l,root->val) && solve(root->right,root->val,r);       
        
    }
    bool isValidBST(TreeNode* root) {
        
        return solve(root,LLONG_MIN,LLONG_MAX);
        
    }
