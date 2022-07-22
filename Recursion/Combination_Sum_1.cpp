 void solve(vector<int>&a,vector<int>v, vector<vector<int>>&ans,int idx,int target){
        
        if(idx>=a.size()){
            if(target==0) ans.push_back(v);
            v.clear();
            return;    
        }
        
        if(a[idx]<=target){
            v.push_back(a[idx]);
            solve(a,v,ans,idx,target-a[idx]);
            v.pop_back();     
        }
        
        solve(a,v,ans,idx+1,target);
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>v;
        vector<vector<int>>ans;
        
        solve(candidates,v, ans,0,target);
        
        return ans;
        
        
    }
