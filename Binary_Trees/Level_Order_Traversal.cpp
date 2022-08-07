vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        
        if(!root) return ans;
        
         queue<TreeNode*>q;
        q.push(root); vector<int>v;
        while(!q.empty()){
            int n=q.size();
            vector<int>v;    
            while(n--){
                auto node=q.front();
                v.push_back(node->val);
                q.pop(); 
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);    
            }
            ans.push_back(v);
        }
        
        return ans;
       
    }
