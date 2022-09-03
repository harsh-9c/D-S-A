// It find's the shortest distance between every pair of node
// Time Complexity -> O(N^3)

void shortest_distance(vector<vector<int>>&dist){
	    
	    int n=dist.size();
	  
	    for(int k=0;k<n;k++){
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                if(dist[i][k]==-1 || dist[k][j]==-1){
	                    continue;
	                }
	                int cur_dist=dist[i][k]+dist[k][j];
	                if(dist[i][j]==-1) dist[i][j]=cur_dist;
	                else dist[i][j]=min(dist[i][j],cur_dist);
	            }
	        }
	    }
  
	}
