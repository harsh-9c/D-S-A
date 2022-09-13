class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long int rem2=target-nums[i];
            for(int j=i+1;j<n;j++){
                long long int rem=rem2-nums[j];
                int start=j+1;
                int end=n-1;
                while(start<end){
                    if(nums[start]+nums[end]==rem){
                        ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                        int temp=nums[start];
                        while(start<end && nums[start]==temp) start++;
                        temp=nums[end];
                        while(start<end && nums[end]==temp) end--;
                    }
                    else if(nums[start]+nums[end]>rem) end--;
                    else start++;
                }
                while(j+1<n && nums[j]==nums[j+1]) j++;     
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        
        return ans;
    }
    
    
};
