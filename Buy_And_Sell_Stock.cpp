int maxProfit(vector<int>& prices) {
        
        int ans=0; int mn,mx;
        mn=mx=prices[0];
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]>mx) mx=prices[i];
            else if(prices[i]<mn){
                ans=max(ans,mx-mn);
                mn=prices[i];
                mx=prices[i];
            }
        }
        
        ans=max(ans,mx-mn);
        return ans;
        
    }
