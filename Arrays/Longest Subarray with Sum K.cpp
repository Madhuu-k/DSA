#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int maxLen = 0;
    int target; cin >> target;

    int left = 0, sum = 0;
    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum > target) {
            sum -= arr[left];
            left++;
        }
        if (sum == target) maxLen = max(maxLen, right - left + 1);
    }

    cout << maxLen << endl;
    return 0;
}