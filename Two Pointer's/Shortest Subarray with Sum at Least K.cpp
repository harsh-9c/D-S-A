class Solution {
public:
    #define ll long long
    int shortestSubarray(vector<int>& nums, int k) {
        
        ll int start=0,end=0,n=nums.size();
        ll int sum=0,ans=INT_MAX;
        priority_queue<pair<ll int,ll int>,vector<pair<ll int,ll int>>,greater<pair<ll int,ll int>>>p;
        
        while(end<n){
            sum+=nums[end];         
            if(sum>=k) ans=min(ans,end+1);
            while(p.size() && sum-p.top().first>=k){
                ans=min(ans,end-p.top().second);
                p.pop();
            }
                
                p.push({sum,end});
            
            end++;        
        }
        
        if(ans==INT_MAX) return -1;
        return ans;
        
    }
};
