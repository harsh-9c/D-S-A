// Approach 1

string longestCommonPrefix(vector<string>& strs) {    
        string ans = strs[0];
        
        for(int i = 1; i < strs.size(); i++) {
            int j;
            for(j = 0; j < strs[i].size(); j++) {
                if(ans[j] != strs[i][j])
                    break;
            }
            ans = ans.substr(0, j);
            if(ans == "")
                return ans;
        }
        
        return ans;
    }


// Approach 2

string longestCommonPrefix(vector<string>& strs) {
        
        string ans;
        int n=strs.size();
        
        int m=strs[0].size(); 
        
        for(int i=0;i<m;i++){
          
            char prev='*'; bool f=true;
          
            for(int j=0;j<n;j++){
                if(strs[j].size()>i){
                    if(prev=='*') prev=strs[j][i];
                    else if(strs[j][i]!=prev) f=false; 
                }
                else if(prev!='*') f=false;
            }

            if(f) ans+=prev;
            else break;
        }
        
        
        return ans;
        
        
    }
