 int findPlatform(int arr[], int dep[], int n){
        
        sort(arr,arr+n);
        sort(dep,dep+n);
        
        int ans=1;
        int prev_idx=0; 
        for(int i=1;i<n;i++){
            if(arr[i]>dep[prev_idx]){
                prev_idx++;
            }
            else{
                ans++;
            }
        }
        
        return ans;
        
    }
