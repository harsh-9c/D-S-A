void solve(vector<int>&v,vector<int>&ans,int idx,int sum){
        if(idx>=v.size()){
            ans.push_back(sum);
            return;
        }
        
        solve(v,ans,idx+1,sum+v[idx]);
        solve(v,ans,idx+1,sum);
    
    }

    vector<int> subsetSums(vector<int> arr, int N){
        
        vector<int>ans;
        solve(arr,ans,0,0);
        return ans;
        
    }
