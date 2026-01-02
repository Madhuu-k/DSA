#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int l1 = m - l + 1;
    int l2 = r - m;
    vector<int> L(l1), R(l2);
    for (int i = 0; i < l1; i++) L[i] = arr[l + i];
    for (int j = 0; j < l2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < l1 && j < l2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < l1) arr[k++] = L[i++];
    while (j < l2) arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int l, int r) {
    if  (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    vector<int> arr = {10, 21, 72, 43, 2, 90, 21, 1, 56};
    int  l = 0, r = arr.size() - 1;
    mergeSort(arr, l, r);
    cout << "After Merge Sort: ";
    for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}