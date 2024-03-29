 void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size();  
        
//      Transpose of matrix
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
//      Swapping Columns
        for(int i=0;i<n;i++){
            int l=0,r=n-1;
            while(l<r){
                swap(matrix[i][l],matrix[i][r]);
                l++; r--;
            }
        }
        
    }

// for 90-degree    --->  Transpose then swap columns
// for 180-degree   --->  swap columns then swap rows
// for 270-degree   --->  Transpose then swap rows
