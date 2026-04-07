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
    cout << "Matrix form of elements: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;

}