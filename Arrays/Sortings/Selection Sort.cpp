#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    vector<int> arr = {10, 21, 34, 91, 21, 22, 2, 8, 82, 100};
    SelectionSort(arr);
    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}