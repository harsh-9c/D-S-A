// Recursion

void solve(TreeNode* root,vector<int>&ans){
        
        if(!root) return;
        ans.push_back(root->val);
        solve(root->left,ans);
        solve(root->right,ans);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        solve(root,ans);
        return ans;
        
    }


// Iterative

vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        
        if(!root) return ans;
        
        stack<TreeNode*>s;
        s.push(root);
        
        while(!s.empty()){
            
            root=s.top();
            s.pop();
            
            ans.push_back(root->val);
            
            if(root->right) s.push(root->right);
            if(root->left) s.push(root->left);
            
               
        }
        
        return ans;
        
    }
