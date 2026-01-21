#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MaxSum(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0];
    vector<int> dp(n);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for (int i = 2; i < n; i++)
        dp[i] = max(dp[i-1], arr[i] + dp[i-1]);

    return dp[n-1];
}

int main() {
    vector<int> arr = {3, 4, 2};
    cout << "Max Sum: " << MaxSum(arr) << endl;
    return 0;
}