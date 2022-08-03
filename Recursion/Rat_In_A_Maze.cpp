// 1st way 

void solve(vector<vector<int>>&m,vector<string>&ans,vector<vector<int>>&vis,string s,int x,int y,int n){
        
        if(x==n-1 && y==n-1){
            ans.push_back(s);
            return;
        }
        
        vis[x][y]=1;
        
        // // down
        if(x+1<n && m[x+1][y]==1 && !vis[x+1][y]){
            s+='D';
            solve(m,ans,vis,s,x+1,y,n);
            s.pop_back();
            vis[x+1][y]=0;
        }
        // left
        if(y-1>=0 && m[x][y-1]==1 && !vis[x][y-1]){
            s+='L';
            solve(m,ans,vis,s,x,y-1,n);
            s.pop_back();
            vis[x][y-1]=0;
        } 
        // // right
        if(y+1<n && m[x][y+1]==1 && !vis[x][y+1]){
            s+='R';
            solve(m,ans,vis,s,x,y+1,n);
            s.pop_back();
            vis[x][y+1]=0;
        }
        // // up
        if(x-1>=0 && m[x-1][y]==1 && !vis[x-1][y]){
            s+='U';
            solve(m,ans,vis,s,x-1,y,n);
            s.pop_back();
            vis[x-1][y]=0;
        }
        
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        
        
        if(m[0][0]==1) solve(m,ans,vis,"",0,0,n);
        
        
        return ans;
        
        
        
    }


// 2nd way

void solve(int i, int j, vector < vector < int >> & a, int n, vector < string > & ans, string move,
    vector < vector < int >> & vis, int di[], int dj[]) {
    if (i == n - 1 && j == n - 1) {
      ans.push_back(move);
      return;
    }
    string dir = "DLRU";
    for (int ind = 0; ind < 4; ind++) {
      int nexti = i + di[ind];
      int nextj = j + dj[ind];
      if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1) {
        vis[i][j] = 1;
        solve(nexti, nextj, a, n, ans, move + dir[ind], vis, di, dj);
        vis[i][j] = 0;
      }
    }

  }


    vector < string > findPath(vector < vector < int >> & m, int n) {
      vector < string > ans;
      vector < vector < int >> vis(n, vector < int > (n, 0));
      int di[] = {+1,0,0,-1};
      int dj[] = {0,-1,1,0};
      if (m[0][0] == 1) solve(0, 0, m, n, ans, "", vis, di, dj);
      return ans;
    }
