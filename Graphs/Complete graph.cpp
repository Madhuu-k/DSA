#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(vector<vector<int>>& adj, vector<bool>& visited, int node) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbour : adj[node]) {
        if (!visited[neighbour]) dfs(adj, visited, neighbour);
    }
}

void bfs(vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        cout << node << " ";
        q.pop();

        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}


bool isCycle(vector<vector<int>>& adj, vector<bool>& visited, int node, int parent) {
    visited[node] = true;
    for (int neigh : adj[node]) {
        if (!visited[neigh] && isCycle(adj, visited, neigh, node)) return true;
        else if (neigh != parent) return true;
    }
    return false;
}

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

void moveInGrid(vector<vector<int>>& adj, vector<vector<bool>>& visited, int r, int c) {
    visited[r][c] = true;
    int rows = adj.size();
    int cols = adj[0].size();

    for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr >= 0 && nc >= 0 && nr < rows && nc < cols && !visited[nr][nc]) moveInGrid(adj, visited, nr, nc);
    }
}


int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> adj(nodes);
    vector<bool> visited(nodes, false);

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool found = false;

    for (int i = 0; i < nodes; i++) {
        if (!visited[i] && isCycle(adj, visited, i, -1)) found = true;
    }

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}