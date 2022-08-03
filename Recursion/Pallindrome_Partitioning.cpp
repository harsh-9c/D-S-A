bool isPallindrome(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++; r--;
        }
        
        return true;
        
    }
    
    void solve(vector<vector<string>>& ans,vector<string>&v,string s,int idx){
        
        if(idx==s.size()){
            ans.push_back(v);
            return;
        }
        
        for(int i=idx;i<s.size();i++){
            if(isPallindrome(s,idx,i)){
                
                v.push_back(s.substr(idx,i-idx+1));
                solve(ans,v,s,i+1);
                v.pop_back();
                
            }
        }
        
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>>ans;
        vector<string>v;
        
        solve(ans,v,s,0);
        
        return ans;
        
    }
