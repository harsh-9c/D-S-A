class BSTIterator {
public:
    stack<TreeNode*>s;
    
    BSTIterator(TreeNode* root) {
        pushAll(root);
        
    }
    
    int next() {
        TreeNode* temp=s.top();
        s.pop();
        pushAll(temp->right);
        return temp->val;      
    }
    
    bool hasNext() {
        
        return s.size();
        
    }
    private:
    void pushAll(TreeNode* root){
        while(root){
            s.push(root);
            root=root->left;
        }
        
    }
};
