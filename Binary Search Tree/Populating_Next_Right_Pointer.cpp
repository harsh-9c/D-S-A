Node* connect(Node* root) {
        
        if(!root) return root;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            
            int n=q.size();
            
            for(int i=0;i<n;i++){
                auto node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
                if(i<n-1){
                    node->next=q.front();
                }
            }
            
        }
        
        return root; 
        
    }
