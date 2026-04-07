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
    // Calculate Row Sum
    for (int i = 0; i < row; i++) {
        int rowSum = 0;
        for (int j = 0; j < col; j++) rowSum += arr[i][j];
        cout << "Sum of row " << i + 1 << " is " << rowSum << endl;
    }
    cout << endl;
    // Calculate Column Sum
    for (int i = 0; i < col; i++) {
        int colSum = 0;
        for (int j = 0; j < row; j++) colSum += arr[j][i];
        cout << "Sum of column " << i + 1<< " is " << colSum << endl;
    }

    return 0;

    return 0;

}