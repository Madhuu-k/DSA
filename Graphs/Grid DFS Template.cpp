#include <iostream>
#include <vector>
using namespace std;

void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
    int n = grid.size();
    int m = grid[0].size();

    visited[r][c] = true;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];

        if (nr >= 0 && nc >= 0 && nr < n && nc < m && !visited[nr][nc] && grid[nr][nc] == '1') {
            dfs(nr, nc, grid, visited);
        }
    }
}

int main() {
    // Example grid: '1' means land, '0' means water
    vector<vector<char>> grid = {
        {'1','1','0','0'},
        {'0','1','0','1'},
        {'1','0','0','1'},
        {'0','0','1','1'}
    };

    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Run DFS starting at (0,0) if it's land
    if (grid[0][0] == '1') {
        dfs(0, 0, grid, visited);
    }

    // Print visited matrix
    cout << "Visited cells:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << visited[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
