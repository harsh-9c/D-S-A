long long ayushGivesNinjatest(int n, int m, vector<int> time){	
  
  	ll int low=LLONG_MAX;
    ll int high=0;
  
    for(auto x:time){
      low=min(low,1LL*x);
      high+=x;
    }
    
    ll int ans=high; 
    
    
    while(low<=high){ 
        ll int mid=(low+high)/2; 
        ll int cur=0; 
        // corner case
        int cnt=1;
        
        for(int i=0;i<m;i++){
            // corner case
            if(time[i]>mid){
                cnt=n+5; break;
            }
            if(cur+time[i]<=mid) cur+=time[i];
            else cur=time[i],cnt++;
        }
        
        if(cnt<=n) ans=min(ans,mid),high=mid-1;
        else low=mid+1;
        
    }
    
    return low;
    
}
