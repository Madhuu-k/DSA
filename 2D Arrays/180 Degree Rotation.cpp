#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m; cin >> m;
    vector<vector<int>> mat(m, vector<int>(m, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) cin >> mat[i][j];
    }

    vector<vector<int>> result(m, vector<int>(m, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            result[m - 1 - i][m - 1 - j] = mat[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}