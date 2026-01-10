#include<iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int l, int r) {
    if (l >= r) return;
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    reverseArray(arr, l + 1, r - 1);
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    reverseArray(arr, 0, arr.size() - 1);
    cout << "Reversed Array: ";
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}