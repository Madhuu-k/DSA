#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Rob(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0];
    vector<int> dp(n);
    dp[0] = arr[0];
    dp[1] = max(dp[0], dp[1]);
    for (int i = 2; i < n; i++) dp[i] = max(dp[i - 1], arr[i] + dp[i - 2]);
    return dp[n-1];
}

int main() {
    vector<int> arr = {2, 7, 9, 3, 1};
    cout << "Maximum Amount Robbed: " << Rob(arr) << endl;
    return 0;
}

