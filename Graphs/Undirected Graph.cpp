#include<iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> adj(nodes);

    for (int i = 0; i < edges; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);   // A to B
        adj[v].push_back(u);   // B to A
    }

    for (int i = 0;i < nodes; i++) {
        cout << i << " -> ";
        for (int neighbour : adj[i]) cout << neighbour << " ";
        cout << "\n";
    }

    return 0;
}