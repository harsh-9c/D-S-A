// Recursive

void solve(TreeNode* root,vector<int>&ans){
        
        if(!root) return;
        
        solve(root->left,ans);
        solve(root->right,ans);
        ans.push_back(root->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        solve(root,ans);
        return ans;
        
    }


// Using Two Stacks

vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        
        if(!root) return ans;
    
        stack<TreeNode*>s1,s2;
        
        s1.push(root);
        
        while(!s1.empty()){
            
            s2.push(s1.top());   
            s1.pop();
            
            if(s2.top()->left) s1.push(s2.top()->left);
            if(s2.top()->right) s1.push(s2.top()->right);
        }
        
        while(!s2.empty()){
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        
        
        
        return ans;
        
    }


// Using One Stack

vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        
        if(!root) return ans;
    
        stack<TreeNode*>s;
        
        TreeNode* cur=root;
        
        while(cur!=NULL || !s.empty()){
            
            if(cur!=NULL){
                s.push(cur);
                cur=cur->left;
            }
            else{
                TreeNode* temp=s.top()->right;
                if(temp==NULL){
                    temp=s.top();
                    s.pop();
                    ans.push_back(temp->val);
                    while(!s.empty() && s.top()->right==temp){
                        temp=s.top(); 
                        s.pop();
                        ans.push_back(temp->val);
                    }
                            
                }
                else{
                    cur=temp;
                    
                }
            
            }
                
        }
        
        return ans;
        
    }
