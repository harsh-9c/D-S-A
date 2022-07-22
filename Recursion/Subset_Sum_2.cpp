void solve(vector<int>&nums,vector<int>&v,vector<vector<int>>&ans,int idx){
        
            ans.push_back(v);
            
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            v.push_back(nums[i]);
            solve(nums,v,ans,i+1);
            v.pop_back();
        }   
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<int>v;
        vector<vector<int>>ans;
        solve(nums,v,ans,0);
        
        return ans;
        
    }
