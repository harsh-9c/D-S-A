vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    
    if(!root) return{{}, {}, {}};
    
    vector<int>pre,in,post;
    
   stack<pair<BinaryTreeNode<int>*,int>>s;
    s.push({root,1});
    
    while(!s.empty()){
        pair<BinaryTreeNode<int>*,int>node=s.top();
        
        
//         inorder
        if(node.second==2){
            in.push_back(node.first->data);
            s.top().second++; 
            if(node.first->right) s.push({node.first->right,1});   
        }     
//         preorder
        else if(node.second==1){
            pre.push_back(node.first->data);
            s.top().second++;
            if(node.first->left) s.push({node.first->left,1});
        }
//         postorder
        else{
            post.push_back({node.first->data}); 
            s.pop();
        }
            
    }
    
    
    return {in,pre,post};
    
    
  
}
