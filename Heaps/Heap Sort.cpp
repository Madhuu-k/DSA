#include<iostream>
#include<vector>
using namespace std;

void heapifyDown(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapifyDown(arr, n, largest); // i = largest
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = n/2 - 1; i >= 0; i--) heapifyDown(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapifyDown(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    cout << "Before Sorting: ";
    for (auto x : arr) cout << x << " ";
    cout << "\nAfter Sorting: ";
    heapSort(arr);
    for (auto x : arr) cout << x << " ";
    return 0;
}