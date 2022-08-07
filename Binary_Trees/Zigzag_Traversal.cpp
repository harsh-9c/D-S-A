vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>ans;
    
    if(!root) return ans;
    
    queue<TreeNode*>q;
    q.push(root);
    
    int leftToRight=1;
    
    while(!q.empty()){
        
        int n=q.size();
        vector<int>v(n);
        
       for(int i=0;i<n;i++){
            
            auto node=q.front();
            q.pop();
           
            if(leftToRight) v[i]=node->val;
           else v[n-i-1]=node->val;
        
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
        }
        
        ans.push_back(v);
        
        leftToRight=leftToRight^1;
    
    }
        
        return ans;
    
        
    }
