vector<int> findSpiral(Node *root){
    
    vector<int>ans;
    
    if(!root) return ans;
    
    queue<Node*>q;
    q.push(root);
    
    int f=1;
    
    while(!q.empty()){
        
        int n=q.size();
        int start=ans.size();
        
        while(n--){
            
            auto node=q.front();
            q.pop();
            ans.push_back(node->data);
        
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
        }
        
        if(f){
            reverse(ans.begin()+start,ans.end());
        }
        
        f=f^1;
    
    }
    
    return ans;

    
}
