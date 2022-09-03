// Need 3 containers
// 1. MST to check current node is already added in mst or not
// 2. KEY to check min weight of current node
// 3. Parent to print mst


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,e; cin>>n>>e;
    vector<pair<int,int>>graph[n];
    for(int i=0;i<e;i++){
        int x,y,wt; cin>>x>>y>>wt;
        graph[x].push_back({y,wt});
        graph[y].push_back({x,wt});
    }
    int key[n]; int mst[n]={0}; int parent[n];
    for(int i=0;i<n;i++){
        key[i]=INT_MAX; 
    }
    key[0]=0; parent[0]=-1;
    
    priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >p;
    p.push({0,0});
    while(!p.empty()){
        int u=p.top().second;
        p.pop();
        mst[u]=1;
        for(auto it:graph[u]){
            int node=it.first;
            int wt=it.second;
            if(!mst[node] && key[node]>wt){
                parent[node]=u;
                key[node]=wt;
                p.push({key[node],node});
            }
        }
    }
   
    for(int i=1;i<n;i++){
        cout<<parent[i]<<" - "<<i<<"\n";
    }
    
    return 0;
}
