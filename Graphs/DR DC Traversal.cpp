#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int>>& adj, vector<vector<bool>>& visited, int r, int c) {
    int rows = adj.size();        // Corrected: adj.size() is total rows
    int cols = adj[0].size();     // Corrected: adj[0].size() is total columns

    visited[r][c] = true;
    cout << "Visited cell: (" << r << ", " << c << ") with value: " << adj[r][c];

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};


    for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];
        if (nr >= 0 && nr < rows && nc >=0 && nc < cols && !visited[nr][nc]) dfs(adj, visited, nr, nc);
    }
}