#include<iostream>
#include<vector>
using namespace std;

// sum(l → r) = prefix[r] - prefix[l-1]

int rangeSum(vector<int> &arr, int l, int r) {
    if (l == 0) return arr[r];
    return arr[r] - arr[l - 1];
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << rangeSum(arr, 2, 5) << endl;
    return 0;
}