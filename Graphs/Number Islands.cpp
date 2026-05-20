#include<iostream>
#include<vector>
using namespace std;

void dfs(int row, int col, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};
    visited[row][col] = true;

    int rows = grid.size();
    int cols = grid[0].size();

    for (int k = 0; k < 4; k++) {
        int nr = row + dr[k];
        int nc = col + dc[k];
        if (nr >= 0 && nc >= 0 && nr < rows && nc < cols &&
            !visited[nr][nc] && grid[nr][nc] == '1') {
            dfs(nr, nc, grid, visited);
            }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int rows, cols;
    cin >> rows >> cols;

    vector<vector<char>> grid(rows, vector<char>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!visited[i][j] && grid[i][j] == '1') {
                dfs(i, j, grid, visited);
                count++;
            }
        }
    }

    cout << "Number of connected components: " << count << "\n";
    return 0;
}
