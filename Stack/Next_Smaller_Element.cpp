vector<int> Solution::prevSmaller(vector<int> &a) {
       
    vector<int>ans(a.size(),-1);
    stack<int>s;
    
    for(int i=0;i<a.size();i++){
        while(!s.empty() && a[s.top()]>=a[i]) s.pop();
        if(!s.empty()) ans[i]=a[s.top()];
        s.push(i);
    }
    
    
    return ans;
    
   
}
