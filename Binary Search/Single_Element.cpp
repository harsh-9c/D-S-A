// L<=R

int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size()==1) return nums[0];
        
        int low=0;
        int high=nums.size()-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if((mid%2==0 && nums[mid]==nums[mid+1]) || 
            (mid%2 && nums[mid]==nums[mid-1])) low=mid+1;
            else high=mid-1;
        }
        
        return nums[low];
        
    }



// L<R 

int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while(left < right){
            int mid = (left + right)/2;
            if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
                left = mid + 1;
            else
                right = mid;
        }
        
        return nums[left];
    }
