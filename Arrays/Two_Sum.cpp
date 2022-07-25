vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int no2=target-nums[i];
            if(m.count(no2)) return {i,m[no2]};
            m[nums[i]]=i;
        }
        
        return {};
        
    }
