int lengthOfLongestSubstring(string s) {
        
        if(s.size()==0) return 0;
        
        vector<int>idx(256,-1);
        int ans=0;
        int l=-1;

        for(int i=0;i<s.size();i++){
            if(idx[s[i]]>l) l=idx[s[i]];
            idx[s[i]]=i;
            ans=max(ans,i-l);
        } 

        
        return ans;
        
    }
