vector<int> maxMinWindow(vector<int> a, int n) {
    
    vector<int>left(n); 
    vector<int>right(n); 
    vector<int>ans(n); 
    
    
    for(int i=0;i<n;i++){
        left[i]=-1;
        right[i]=n;
        ans[i]=INT_MIN;
    }
    
    stack<int>s;
    
    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()]>=a[i]) s.pop();
        if(!s.empty()) left[i]=s.top();
        s.push(i);
    }
    
    while(!s.empty()) s.pop();
    
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && a[s.top()]>=a[i]) s.pop();
        if(!s.empty()) right[i]=s.top();
        s.push(i);
    }
  
    
    for(int i=0;i<n;i++){
        int idx=(right[i]-left[i]-1)-1;
        ans[idx]=max(ans[idx],a[i]);
    }
    
    for(int i=n-2;i>=0;i--){
        ans[i]=max(ans[i],ans[i+1]);
    }
    
    return ans;
     
    
}
