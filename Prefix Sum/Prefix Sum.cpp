#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixSum(vector<int> &arr) {
    int n = arr.size();
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) prefix[i + 1] = prefix[i] + arr[i];
    return prefix;
}

int main() {
    vector<int> arr = {3, 1, 4, 2, 5};
    vector<int> ans = prefixSum(arr);
    for (auto x : ans) cout << x << " ";
    return 0;
}