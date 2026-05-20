#include<iostream>
#include<vector>
using namespace std;

bool isCycle(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbour : adj[node]) {
        if (!visited[neighbour]) {
            if (isCycle(neighbour, node, adj, visited)) return true;
        }
        else if (neighbour != parent) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nodes, edges; cin >> nodes >> edges;
    vector<vector<int>> adj(nodes);

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(nodes, false);
    bool cycle = false;
    for (int i = 0; i < nodes; i++) {
        if (!visited[i]) {
            if (isCycle(i, -1, adj, visited)) {
                cycle = true;
                break;
            }
        }
    }

    cout << (cycle ? "Yes It is a Cycle" : "No not a cycle");
    return 0;
}