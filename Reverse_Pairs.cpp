 int cnt=0;

    void merge(vector<int>& nums,int low,int mid,int high){
        int i=low;
        int j=mid+1;
        
        while(i<=mid && j<=high){
            if((long)nums[i]>(long)2*nums[j]) cnt+=(mid-i+1),j++;
            else i++;      
        }
        
       int l=low; 
       int r=mid+1; 
       int idx=0;
       int a[high-low+1];
        
        while(l<=mid && r<=high){
            if(l<=mid && nums[l]<nums[r]){
                a[idx]=nums[l];
                l++; idx++;
            }
            else{
                a[idx]=nums[r];
                r++; idx++;
            } 
        } 
        
        while(l<=mid) a[idx]=nums[l],idx++,l++;
        while(r<=high) a[idx]=nums[r],idx++,r++;
        for(int i=0;i<high-low+1;i++){
            nums[low+i]=a[i];
        }
        
        return;
        
    }

    void merge_sort(vector<int>& nums,int low,int high){
            if(low==high) return;
            int mid=(low+high)/2;
            merge_sort(nums,low,mid);
            merge_sort(nums,mid+1,high);
            merge(nums,low,mid,high);
    }

    int reversePairs(vector<int>& nums) {
        cnt=0;
        
        merge_sort(nums,0,nums.size()-1);
        
        return cnt;
        
    }
