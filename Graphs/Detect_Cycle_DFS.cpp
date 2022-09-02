bool isCyclic(int node,vector<int>dependencies[],vector<int>&visited){
        
        if(visited[node]==2) return true;
        visited[node]=2;
        for(auto x:dependencies[node]){
            if(visited[x]!=1){
                if(isCyclic(x,dependencies,visited)) return true;
            }
        }
        visited[node]=1;
        return false;
        
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int>dependencies[numCourses];
        vector<int>visited(numCourses,0);
        
        for(auto x:prerequisites){
            dependencies[x[1]].push_back(x[0]);
        }
        
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(isCyclic(i,dependencies,visited)) return false;
            }
        }
      
        
        return true;
        
               
    }
