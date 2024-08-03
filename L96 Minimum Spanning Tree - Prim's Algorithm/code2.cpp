#include <bits/stdc++.h> 

//TC O(nlogn)

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // create adj list
    unordered_map<int, list<pair<int, int>>> adj;

    for(int i=0;i<g.size();i++){
        int u= g[i].first.first;
        int v= g[i].first.second;
        int w= g[i].second;

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> key(n+1, INT_MAX);
    vector<bool> mst(n+1, false);
    vector<int> parent(n+1, -1);

    //let's start the algo
    key[1]=0;
    parent[1]=-1;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
    minheap.push(make_pair(0, 1)); // weight, node

    while(!minheap.empty()){

        //find the min wali node
        auto front= minheap.top();
        minheap.pop();
        int mini= front.first;
        int u= front.second;

        //mark min node as true
        mst[u]= true;

        //check it's adjacent nodes
        for(auto it: adj[u]){
            int v= it.first;
            int w= it.second;

            if(mst[v] == false && w < key[v]){
                parent[v]=u;
                key[v]= w;
                minheap.push(make_pair(w, v));
            }
        }
    }

    vector<pair<pair<int, int>, int>> result;
    for(int i=2;i<=n;i++){
        result.push_back(make_pair(make_pair(parent[i], i), key[i]));
    }

    return result;   
}