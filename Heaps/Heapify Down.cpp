#include<iostream>
#include<vector>
using namespace std;

void heapifyDown(vector<int>& arr, int i) {
    int n = arr.size();
    while (true) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;

        if (left < n && arr[left] > arr[largest]) largest = left;
        if (right < n && arr[right] > arr[largest]) largest = right;

        if (largest != i) {
            swap(arr[i], arr[largest]);
            largest = i;
        } else break;
    }
}

int main() {
    vector<int> arr = {3, 10, 5, 2, 4};
    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    heapifyDown(arr, 0);
    cout << "\nAfter Heapify Down: ";
    for (int x : arr) cout << x << " ";
    return 0;
}