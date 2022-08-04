vector<int> leftView(Node *root){
    
    vector<int>ans;
    
    if(!root) return ans;
    
    queue<pair<Node*,int>>q;
    q.push({root,0}); 
    map<int,int>m; int level=0;
    
    while(!q.empty()){
        
        pair<Node*,int>node =q.front();
        q.pop();
        
        if(!m[node.second]) m[node.second]=node.first->data;
        

        if(node.first->left) q.push({node.first->left,node.second-1});
        if(node.first->right) q.push({node.first->right,node.second+1});
        
    }
    
    for(auto x:m) ans.push_back(x.second);
    
    return ans;
   
}
