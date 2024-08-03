#include <bits/stdc++.h> 
// tc O(N+E) SC O(N)
void dfs(int node, unordered_map<int, list<int>>& adj, vector<bool>& visited, stack<int>& st){
    visited[node]=1;

    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour, adj, visited, st);
        }
    }

    st.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int, list<int>> adj;
    vector<bool> visited(v);

    for(int i=0;i<e;i++){
        int a= edges[i][0];
        int b= edges[i][1];

        adj[a].push_back(b);
    }

    stack<int> st;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(i, adj, visited, st);
        }
    }

    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}