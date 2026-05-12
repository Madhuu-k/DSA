#include<iostream>
#include<vector>
using namespace std;

bool dfs(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbour : adj[node]) {
        if (!visited[neighbour]) {
            if (dfs(neighbour, node, adj, visited)) return true;
        }
        else if (parent != neighbour) return true;
    }
    return false;
}

int main() {
    int nodes, edges; cin >> nodes >> edges;
    vector<vector<int>> adj(nodes);

    for (int i = 0; i < edges; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(nodes, false);
    bool hasCycle = false;

    for (int i = 0; i < nodes; i++) {
        if (!visited[i]) {
              if(dfs(i, -1, adj, visited)) {
                  hasCycle = true;
                  break;
              }
        }
    }

    if (hasCycle) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}