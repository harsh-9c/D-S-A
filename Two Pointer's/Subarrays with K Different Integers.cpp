class Solution {
public:
    int solve(vector<int>&nums,int k){
        int ans=0;
        int start=0,end=0;
        int n=nums.size();
        map<int,int>m;
        int cnt=0;
        while(end<n){
            m[nums[end]]++;
            
                while(m.size()>k && start<=end){
                    m[nums[start]]--;
                    if(m[nums[start]]==0) m.erase(nums[start]);
                    start++;
                }
            
            if(m.size()<=k) ans+=end-start+1;
            end++;
        }
        
        return ans;
        
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        cout<<solve(nums,k)<<" "<<solve(nums,k-1)<<"\n";
       return solve(nums,k)-solve(nums,k-1);
        
    }
};
