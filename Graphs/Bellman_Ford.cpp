// It can detect -ve cycle if we run it nth time and the cur dist get reduce again then there is a -ve cycle.

vector <int> bellman_ford(int nodes, vector<vector<int>>graph, int source) {
        vector<int>dist(nodes,INT_MAX);
        dist[source]=0;
        
        for(int i=0;i<nodes-1;i++){
            for(auto x:graph){
                    if(dist[x[0]]+x[2]<dist[x[1]]){
                        dist[x[1]]=dist[x[0]]+x[2];
                    } 
            }
        }
        
        return dist;
        
    }
