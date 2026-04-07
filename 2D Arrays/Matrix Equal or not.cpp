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

    int row2, col2;
    cout << "Enter number of rows: "; cin >> row2;
    cout << "Enter number of columns: "; cin >> col2;
    int arr2[row2][col2];

    cout << "Enter elements for 2nd matrice: ";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) cin >> arr2[i][j];
    }

    bool isIdentical = true;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] != arr2[i][j]) isIdentical = false;
        }
    }

    cout << (isIdentical ? "The Matrices are Identical" : "The Matres are not Identical");

    return 0;

}