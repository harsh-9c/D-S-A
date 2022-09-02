// Kosaraju's Algortihm

#include <bits/stdc++.h>
using namespace std;

void rev_Dfs(int node,vector<int>graph2[],vector<int>&visited){
    cout<<node<<" ";
    visited[node]=1;
    for(auto x:graph2[node]){
        if(!visited[x]) rev_Dfs(x,graph2,visited);
    }
}

void topoSort_Dfs(int node,vector<int>graph[],vector<int>&visited,vector<int>&v){
    visited[node]=1;
    for(auto x:graph[node]){
        if(!visited[x]) topoSort_Dfs(x,graph,visited,v);
    }
    v.push_back(node);
}

vector<int> topoSort(vector<int>graph[],int nodes){
    vector<int>visited(nodes+1,0);
    vector<int>v;
    for(int i=1;i<=nodes;i++){
        if(!visited[i]) topoSort_Dfs(i,graph,visited,v);
    }

    return v;  
}

int main() {

    // Steps to find strongly connected componenets
    // 1. Find TopoSort
    // 2. Take Transpose of given graph
    // 3. Apply DFS on TopoSort

    int nodes,edges; cin>>nodes>>edges;
    // Original Graph
    vector<int>graph[nodes+1];

    for(int i=1;i<=edges;i++){
        int x,y; cin>>x>>y;
        // Directed Graph
        graph[x].push_back(y);
    }

    // TopoSort
    vector<int>topo=topoSort(graph,nodes);
    reverse(topo.begin(),topo.end());

    // Transpose Graph
    vector<int>graph2[nodes+1];

    for(int i=1;i<=nodes;i++){
        for(auto x:graph[i]){
            graph2[x].push_back(i);
        }
    }
    
    // DFS on TopoSort
    vector<int>visited(nodes+1,0);
    for(auto x:topo){
        if(!visited[x]) rev_Dfs(x,graph2,visited),cout<<"\n";
    }


    return 0;


}
