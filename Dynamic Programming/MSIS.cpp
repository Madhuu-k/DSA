#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int maxSumIS(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        dp[i] = arr[i];
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) dp[i] = max(dp[i], arr[i] + dp[j]);
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int main() {
    vector<int> arr = {1, 101, 2, 3, 100};
    cout << "Maximum Sum: " << maxSumIS(arr);
    return 0;
}