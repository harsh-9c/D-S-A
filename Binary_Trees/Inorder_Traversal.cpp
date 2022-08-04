// Recursion

void solve(TreeNode* root,vector<int>&ans){
        if(!root) return;
        
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        solve(root,ans);
        return ans;
        
    }


// Iterative

vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        stack<TreeNode*>s;
        
        TreeNode* node=root;
        
        while(true){
            
            if(node!=NULL){
                s.push(node);
                node=node->left;
            }
            else{
                if(s.empty()) break;
                node=s.top();
                s.pop();
                ans.push_back(node->val);
                node=node->right;
            }
            
        }
        
       
        return ans;
        
    }
