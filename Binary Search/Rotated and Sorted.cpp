#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rotatedSortedArray(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) return mid;
        // Left Sorted
        if (arr[l] <= arr[m]) {
            if (target >= arr[l] && target <= arr[m]) r = m - 1;
            else l = m + 1;
        }
        // Right Sorted
        else {
            if (target >= arr[m] && target <= arr[r]) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 12, 34, 90, 122};
    int target = 90;
    cout << rotatedSortedArray(arr, target) << endl;
    return 0;
}