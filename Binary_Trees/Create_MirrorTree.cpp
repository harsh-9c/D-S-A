void mirror(Node* node) {
        
        if(!node) return;
        
        if(node){
            
        Node* temp=node->right;
        node->right=node->left;
        node->left=temp;
        
        mirror(node->left);
        mirror(node->right);
        
    }
