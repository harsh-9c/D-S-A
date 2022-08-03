bool safe(vector<string>&board,int row,int col,int n){
        
        int i=row-1,j=col-1;
//         1st direction
        while(i>=0 && j>=0){
            if(board[i][j]=='Q') return false;
            i--; j--;
        }
        
//         2nd direction
        i=row; j=col-1;
        while(j>=0){
            if(board[i][j]=='Q') return false;
            j--;
        }
        
//          3rd direction
        i=row+1; j=col-1;
        while(i<n && j>=0){
            if(board[i][j]=='Q') return false;
            i++; j--;
        }
        
        return true;
               
    }
    
    void solve(vector<vector<string>>&ans,vector<string>&board,int col,int n){
        
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int i=0;i<n;i++){
            if(safe(board,i,col,n)){
                board[i][col]='Q';
                solve(ans,board,col+1,n);
                board[i][col]='.';
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n){
        
        vector<vector<string>>ans;
        
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        solve(ans,board,0,n);
        
        return ans;
        
        
    }



// Optimized Approach   (In this we are hashing indexes)

void solve(vector<vector<string>>&ans,vector<string>&board,vector<int>&upper,vector<int>&left,vector<int>&lower,int col,int n){
        
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int i=0;i<n;i++){
            if(!upper[n-1+col-i] && !left[i] && !lower[i+col]){
                
                board[i][col]='Q';
                upper[n-1+col-i]=1;
                left[i]=1;
                lower[i+col]=1;
                
                solve(ans,board,upper,left,lower,col+1,n);
                
                board[i][col]='.';
                upper[n-1+col-i]=0;
                left[i]=0;
                lower[i+col]=0;
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n){
        
        vector<vector<string>>ans;
        vector<string>board(n);
        
//         For hashing idx
        vector<int>upper(2*n-1,0);
        vector<int>left(n,0);
        vector<int>lower(2*n-1,0);
        
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        solve(ans,board,upper,left,lower,0,n);
        
        return ans;
        
        
    }
