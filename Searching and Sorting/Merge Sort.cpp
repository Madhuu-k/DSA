#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r) {
    vector<int> temp; // temporary to store values

    int i = l;
    int j = mid + 1;

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= r) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = l; k <= r; k++) arr[k] = temp [k - l];  // copy back to orginal array
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;

    int mid = (l + r) / 2;

    mergeSort(arr, l, mid);  // FIRST HALF OF ARRAY
    mergeSort(arr, mid + 1, r); // SECOND HALF OF ARRAY

    merge(arr, l, mid, r);
}

int main() {
    vector<int> arr = {1, 82, 72, 63, 51, 15, 43, 91, 21, 8, 0, 5, 56};
    int l = 0, r = arr.size() - 1;
    mergeSort(arr, l, r);
    for (int x : arr) cout << x << " ";
    return 0;
}