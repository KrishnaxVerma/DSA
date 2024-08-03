#include <bits/stdc++.h> 
//TC O(N+E) SC O(N+E)
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int, list<int>> adj;
    vector<bool> visited(v);

    for(int i=0;i<e;i++){
        int a= edges[i][0];
        int b= edges[i][1];

        adj[a].push_back(b);
    }

    vector<int> indegree(v);
    for(auto i: adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }

    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0) q.push(i);
    }

    vector<int> ans;
    while(!q.empty()){
        int front= q.front();
        q.pop();

        //ans store
        ans.push_back(front);

        for(auto neighbour: adj[front]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0) q.push(neighbour);
        }
    }

    return ans;
}