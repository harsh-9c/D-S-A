class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans=0;
        map<int,int>m;
        m[nums[0]]=1;
        for(int i=1;i<nums.size();i++){
            ans+=(m[nums[i]+k]+m[nums[i]-k]);
            m[nums[i]]++;
        }
        
        return ans;
        
    }
};
