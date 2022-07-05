void setZeroes(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        
        for(auto x:v){
            int i=x.first,j=x.second;
            for(int k=0;k<m;k++) matrix[i][k]=0;
            for(int k=0;k<n;k++) matrix[k][j]=0;
        }
           
    }
