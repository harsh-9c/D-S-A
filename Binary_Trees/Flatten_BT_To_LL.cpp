void flatten(TreeNode* root) {    
        if(root){
            
            TreeNode* temp=root->right;
            root->right=root->left;
            root->left=NULL;
            
            TreeNode* node=root;
            while(node->right){
                node=node->right;
            }
            
            node->right=temp;
            
            flatten(root->right);
            
        }
        
        return;
    }
