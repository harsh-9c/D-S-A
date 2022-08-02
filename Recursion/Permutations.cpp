 void solve(vector<vector<int>>&ans,vector<int>&v,vector<int>&nums,map<int,int>&m){
        if(v.size()==nums.size()){
            ans.push_back(v);
            return;
        }
       
        for(int i=0;i<nums.size();i++){ 
            if(!m[nums[i]]){
                m[nums[i]]=1;
                v.push_back(nums[i]);
                solve(ans,v,nums,m);
                v.pop_back();
                m[nums[i]]=0;
            }
        }
        
    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>v; map<int,int>m;
        solve(ans,v,nums,m);
        return ans;
        
    }
