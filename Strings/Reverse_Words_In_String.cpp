string reverseWords(string s) {
        
        reverse(s.begin(),s.end());
        
        int i=0;
        int j=0;
        int lastIdx=0;
        int n=s.size();
        
        while(i<n){
            int startIdx=i;
            while(j<n && s[j]==' ') j++;
            while(j<n && s[j]!=' '){
                s[i]=s[j];
                i++; j++;
                lastIdx=i;
            }
            reverse(s.begin()+startIdx,s.begin()+i);
            s[i]=' '; i++;
        }
        
        s.resize(lastIdx);
        
        return s;
         
        
    }
