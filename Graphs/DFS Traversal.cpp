#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for (int neighbour : node) {
        if (!visited[neighbour]) dfs(neighbour, adj, visited);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nodes, edges; cin >> nodes >> edges;
    vector<vector<int>> adj(nodes);

    for (int i = 0; i < edges; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(nodes, false);

    dfs(0, adj, visited);

    return 0;
}