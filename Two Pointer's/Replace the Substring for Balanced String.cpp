class Solution {
public:
    int balancedString(string s) {
        
        int n=s.size();
        int tar=n/4;
        int ans=n;

        map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        int start=0;
        for(int end=0;end<n;end++){
            m[s[end]]--;
         while(start<n && m['Q']<=tar && m['W']<=tar && m['E']<=tar && m['R']<=tar){
               ans=min(ans,end-start+1); 
               m[s[start]]++;
               start++; 
            }
        }
        
        return ans;
        
    }
};
