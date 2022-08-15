void solve(vector<vector<int>>&image,int sr,int sc,int val,int color){
        
        if(sr<0 || sr>image.size()-1 || sc<0 || sc>image[0].size()-1 || image[sr][sc]!=val || image[sr][sc]==color){
            return ;
        }
        
        image[sr][sc]=color;
        int i=sr,j=sc;
        solve(image,i+1,sc,val,color);
        solve(image,i-1,j,val,color);
        solve(image,i,j+1,val,color);
        solve(image,i,j-1,val,color);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int val=image[sr][sc];
        solve(image,sr,sc,val,color);
        return image;
        
    }
};
