void solve(vector<int>&a,vector<int>v, vector<vector<int>>&ans,int idx,int target){  
       
            if(target==0){
                ans.push_back(v);
                return;
            }
        
        
        for(int i=idx;i<a.size();i++){
            if(i>idx && a[i]==a[i-1]) continue;
            if(a[i]>target) break;
                v.push_back(a[i]);
                solve(a,v,ans,i+1,target-a[i]);
                v.pop_back(); 
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        
        vector<int>v;
        vector<vector<int>>ans;
        solve(candidates,v, ans,0,target);  
        return ans;
        
    }
