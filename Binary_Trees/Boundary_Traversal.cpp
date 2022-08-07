bool isLeaf(Node *root){
        if(!root->left && !root->right) return true;
        return false;
    }
    void go_left(Node *root,vector<int>&ans){
        root=root->left;
        while(root){
            if(!isLeaf(root)) ans.push_back(root->data);
            if(root->left) root=root->left;
            else root=root->right;
        }
    }
    void go_right(Node *root,vector<int>&ans){
        root=root->right;
        vector<int>v;
        while(root){
            if(!isLeaf(root)) v.push_back(root->data);
            if(root->right) root=root->right;
            else root=root->left;
        }
        
        for(int i=v.size()-1;i>=0;i--){
            ans.push_back(v[i]);
        }
        
    }
    void leaf(Node *root,vector<int>&ans){
        if(isLeaf(root)){
            ans.push_back(root->data);
            return;
        }
        if(root->left) leaf(root->left,ans);
        if(root->right) leaf(root->right,ans);
        
    }
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(!root) return ans;
        if(root) ans.push_back(root->data);
        go_left(root,ans);
        leaf(root,ans);
        go_right(root,ans);
        return ans;
        
    }
