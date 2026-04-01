#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 82, 73, 1, 48, 21, 20, 55, 39};

    // NEEDS TEMP TO SWAP - DOES ALL
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}