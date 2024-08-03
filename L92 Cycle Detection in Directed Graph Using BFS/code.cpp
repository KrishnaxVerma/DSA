#include <bits/stdc++.h>
//TC O(N+E) SC O(N+E)
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  unordered_map<int, list<int>> adj;

    for(int i=0;i<edges.size();i++){
        int a= edges[i].first;
        int b= edges[i].second;

        adj[a].push_back(b);
    }

    vector<int> indegree(n+1);
    for(auto i: adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }

    queue<int> q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0) q.push(i);
    }

    int count=0;
    while(!q.empty()){
        int front= q.front();
        q.pop();

        //ans store
        count++;

        for(auto neighbour: adj[front]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0) q.push(neighbour);
        }
    }

    return !(count==n);
}