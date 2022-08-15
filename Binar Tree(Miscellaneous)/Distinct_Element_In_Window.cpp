vector<int> Solution::dNums(vector<int> &a, int k) {
    
    map<int,int>m;
   
    for(int i=0;i<k;i++) m[a[i]]++;
    vector<int>ans;
    ans.push_back(m.size()); 
    
    for(int i=k;i<a.size();i++){
        m[a[i-k]]--;
        if(!m[a[i-k]]) m.erase(a[i-k]);
        m[a[i]]++;
        ans.push_back(m.size());
    }
    
    return ans;
    
}
