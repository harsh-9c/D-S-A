 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>ans;
    
    if(!root) return ans;
    
    queue<TreeNode*>q;
    q.push(root);
    
    int f=0;
    
    while(!q.empty()){
        
        int n=q.size();
        vector<int>v;
        
        while(n--){
            
            auto node=q.front();
            q.pop();
            v.push_back(node->val);
        
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
        }
        
        if(f){
            reverse(v.begin(),v.end());
        }
        ans.push_back(v);
        
        f=f^1;
    
    }
        
        return ans;
    
        
    }
