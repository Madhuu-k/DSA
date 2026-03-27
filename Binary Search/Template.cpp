#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (target == arr[m]) return m;
        else if (arr[m] < target) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 12, 34, 90, 122};
    int target = 90;
    cout << binarySearch(arr, target) << endl;
    return 0;
}