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

    int diagSum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) diagSum += arr[i][j];
        }
    }

    cout << "Diagonal sum: " << diagSum << endl;

    return 0;

}