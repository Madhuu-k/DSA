#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows: "; cin >> row;
    cout << "Enter number of columns: "; cin >> col;
    int arr[row][col];

    cout << "Enter elements: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) cin >> arr[i][j];
    }

    cout << "\nMatrix form of elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) cout << arr[i][j] << " ";
        cout << endl;
    }

    // UPPER TRIANGULAR MATRIX - LEFT VIEW
    cout << "\nUpper Triangular (Left View):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i <= j) cout << arr[i][j] << " ";
            else cout << "  "; // spacing for triangle shape
        }
        cout << endl;
    }

    // UPPER TRIANGULAR MATRIX - RIGHT VIEW
    cout << "\nUpper Triangular (Right View):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i + j <= row - 1) cout << arr[i][j] << " ";
            else cout << "  "; // spacing for triangle shape
        }
        cout << endl;
    }

    return 0;
}
