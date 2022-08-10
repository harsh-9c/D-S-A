void findPreSuc(Node* root, Node*& pre, Node*& suc, int key){
    
    if(!root) return;
    
    if(root->key<key){
        if(!pre || root->key>pre->key) pre=root;
    }
    if(root->key>key){
        if(!suc || root->key<suc->key) suc=root;
    }
    
    findPreSuc(root->left,pre,suc,key);
    findPreSuc(root->right,pre,suc,key);
     
    return;

}
