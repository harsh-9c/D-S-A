int uniquePaths(int m, int n) {
        
        int dp[n];
        for(int i=0;i<n;i++) dp[i]=1;
        int cur;
              
        for(int i=1;i<m;i++){
            cur=1;
           for(int j=1;j<n;j++){
               dp[j]=dp[j]+cur;
               cur=dp[j];
           }
        }
        
        return dp[n-1];
        
    }
