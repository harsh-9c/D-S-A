int floorInBST(TreeNode<int> * root, int X){
    
    int ans=-1;
    
    while(root){
        if(root->val<=X){
            ans=root->val;
            root=root->right;
        }
        else root=root->left;
    }
    
    return ans;
         
}
