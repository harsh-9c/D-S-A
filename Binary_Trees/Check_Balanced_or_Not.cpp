int solve(TreeNode* root){
        if(!root) return 0;
        
        int l=solve(root->left);
        if(l==-1) return -1;
        int r=solve(root->right);
        if(r==-1) return -1;
    
        if(abs(l-r)>1) return -1;
        
           
        return max(l,r)+1;
              
    }
    bool isBalanced(TreeNode* root) {
    
        return solve(root)!=-1;
        
    }
