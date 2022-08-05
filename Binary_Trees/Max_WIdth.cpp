int widthOfBinaryTree(TreeNode* root) {
        
        if(!root) return 0;
        
        int mn,mx;
        mn=mx=0;
        
        queue<pair<TreeNode*,ll int>>q;
        q.push({root,0}); 
        int ans=0;
        
        while(!q.empty()){
            
            int n=q.size();
            int mn=q.front().second;
            int first,last;
        
           for(int i=0;i<n;i++){
            
              auto p=q.front(); 
              ll int val=p.second-mn;
              q.pop();
              
               if(i==0) first=val;
               if(i==n-1) last=val;
               ans=max(ans,last-first+1);
              
            
              if(p.first->left) q.push({p.first->left,(2*val)+1});      
              if(p.first->right) q.push({p.first->right,(2*val)+2});
               
               
                              
            } 
    
                    
        }
        
        return ans;
            
            
                        
    }
