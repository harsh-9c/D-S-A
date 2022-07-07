int fast=0;
        int slow=0;
        int idx=0;
        while(true){
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(fast==slow) break;
        }
        while(true){
            fast=nums[fast];
            idx=nums[idx];
            if(fast==idx) return idx;
        }
        
    }
