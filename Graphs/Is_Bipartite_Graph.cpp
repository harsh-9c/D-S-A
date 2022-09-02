// BFS

bool bipartite(int num,vector<int>&visited,vector<int>v[]){
        queue<int>q;
        q.push(num);
        visited[num]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto x:v[node]){
                if(visited[x]==-1) q.push(x),visited[x]=1-visited[node];
                else if(visited[x]==visited[node]) return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>&graph){
        
        int n=graph.size();
        vector<int>v[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                v[i].push_back(graph[i][j]);
            }
        }
        
        vector<int>visited(n,-1);
        
        for(int i=0;i<n;i++){
            if(visited[i]==-1 && !bipartite(i,visited,v)) return false;
        }
       
       return true; 
        
    }


// DFS

 bool bipartite(int num,vector<int>&visited,vector<int>v[]){
        
        for(auto x:v[num]){
            if(visited[x]==-1){
                visited[x]=1-visited[num];
                if(!bipartite(x,visited,v)) return false;
            }
            else if(visited[x]==visited[num]) return false;
        }
        
        return true;
       
    }
    
    bool isBipartite(vector<vector<int>>&graph){
        
        int n=graph.size();
        vector<int>v[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                v[i].push_back(graph[i][j]);
            }
        }
        
        vector<int>visited(n,-1);
        
        for(int i=0;i<n;i++){
            if(visited[i]==-1){
                visited[i]=1;
                if(!bipartite(i,visited,v)) return false;
            }
        }

       return true; 
        
    }
