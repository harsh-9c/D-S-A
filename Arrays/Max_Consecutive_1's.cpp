int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur=0;
        int prev=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            cur+=nums[i];
            if(cur==prev){
                ans=max(ans,cur);
                cur=0; prev=0;
            }
            prev=cur;
        }
        ans=max(ans,cur);
        
        return ans;
        
    }
