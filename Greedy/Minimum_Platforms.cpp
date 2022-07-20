 int findPlatform(int arr[], int dep[], int n){
        
       sort(arr,arr+n);
       sort(dep,dep+n);
       
       int ans=1; 
       int idx1=0,idx2=1;
       
       for(int i=1;i<n;i++){
           if(dep[idx1]<arr[idx2]) idx1++,idx2++;
           else ans++,idx2++;
       }
        
        return ans;
    
    
    }
