#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int> res) {
    visited[node] = true;
    res.push_back(node);

    for (int neighbour : adj[node]) {
        if (!visited[neighbour]) dfs(neighbour, adj, visited, res);
    }
}

void bfs(vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> adj(nodes);
    for (int i = 0; i < edges; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(nodes, false);
    vector<int> res;
    dfs(0, adj, visited, res);
}