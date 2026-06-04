#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int currSum = arr[0], maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Maximum sum is " << maxSum << endl;
    return 0;
}