class BSTIterator {
    
    stack<TreeNode*>s;
    bool reverse=true;
    
    public:
    BSTIterator(TreeNode* root,bool isReverse){
        reverse=isReverse;
        pushAll(root);
    }
    
    bool hasNext(){
        
        return s.size();
        
    }
    
    int next(){
        
        TreeNode* temp=s.top();
        s.pop();
        if(reverse) pushAll(temp->left);
        else pushAll(temp->right);
        
        return temp->val;
        
    }
    
    private:
    void pushAll(TreeNode* root){
        
        while(root){
            s.push(root);
            if(reverse) root=root->right;
            else root=root->left;
        }
        
    }

};

class Solution {
public:
 
    bool findTarget(TreeNode* root, int k) {
        
        if(!root) return false;
        
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        
        int i=l.next();
        int j=r.next();
        
        while(i<j){
            if(i+j==k) return true;
            else if(i+j<k) i=l.next();
            else j=r.next();
        }
        
        return false;
        
    }
};
