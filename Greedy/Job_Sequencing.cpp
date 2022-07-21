static bool cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n){
        
        sort(arr,arr+n,cmp);
        
        int m[101]={0};
        int ans=0,cnt=0;
        
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>=1;j--){
                if(!m[j]){
                    m[j]=1; 
                    ans+=arr[i].profit; cnt++;
                    break;
                }
            }
        } 
        
        return {cnt,ans};
            
       
       
    } 
