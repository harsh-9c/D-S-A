// 1. Take care of poping from queue


vector <int> dijkstra(int nodes, vector<vector<int>> graph[], int source){
        
        vector<int>dist(nodes,INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>p;
        dist[source]=0;
        p.push({0,source});
        while(!p.empty()){
            int node=p.top().second;
            int prev_dist=p.top().first;
            p.pop();
            for(auto x:graph[node]){
                if(prev_dist+x[1]<dist[x[0]]){
                    dist[x[0]]=prev_dist+x[1];
                    p.push({dist[x[0]],x[0]});
                }
            }
        }
        
        return dist;
        
    }
