#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    vector<int> arr = {10, 20, 2, 34, 18, 91, 6};
    InsertionSort(arr);
    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}