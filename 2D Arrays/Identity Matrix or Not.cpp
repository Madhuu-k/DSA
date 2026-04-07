#include<iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows: "; cin >> row;
    cout << "Enter number of columns: "; cin >> col;
    int arr[row][col];

    cout << "Enter elements: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) cin >> arr[i][j];
    }

    bool isIdentical = true;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j && arr[i][j] != 1) isIdentical = false;
            if (i != j && arr[i][j] != 0) isIdentical = false;
        }
    }

    cout << (isIdentical ? "The Matrix is Identical" : "The Matrix is not Identical");

    return 0;

}