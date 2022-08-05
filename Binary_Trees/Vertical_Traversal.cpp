vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>m;
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            
            auto p=q.front();
            q.pop();
            
            TreeNode* node=p.first;
            int row=p.second.first;
            int col=p.second.second;
            cout<<col<<" "<<row<<"\n";
            m[col][row].insert(node->val);
            
            if(node->left) q.push({node->left,{row+1,col-1}});
            if(node->right) q.push({node->right,{row+1,col+1}}); 
            
        }
        
        vector<vector<int>>ans;
        
        for(auto col:m){
            vector<int>v;
            for(auto row:col.second){
                v.insert(v.end(),row.second.begin(),row.second.end());             
            } 
            ans.push_back(v);
        }
        
        return ans;
        
        
        
       
    }
