bool isValid(bool graph[101][101],int color[],int node,int c,int m,int n){
        
        for(int i=0;i<n;i++){
            if(graph[i][node] && color[i]==c) return false;
        }
        
        return true;
        
    }
    
    bool solve(bool graph[101][101],int color[],int node,int m,int n){
        
        if(node==n) return true;
        
        for(int i=1;i<=m;i++){
            if(isValid(graph,color,node,i,m,n)){
                color[node]=i;
                if(solve(graph,color,node+1,m,n)) return true;
                else color[node]=0;
            }
        }
        
        return false;
        
    }
    
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        
       int color[n]={0};
      
        return solve(graph,color,0,m,n);     
        
    }
