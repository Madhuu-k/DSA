#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int maxLength = 0;

    unordered_set<int> seen(nums.begin(), nums.end());

    for (int num : seen) {
        if (!seen.count(num - 1)) {
            int curr = num;
            int length = 1;

            while (seen.count(curr + 1)) {
                curr = curr + 1;
                length++;
            }
            maxLength = max(maxLength, length);
        }
    }
    cout << "Max length: " << maxLength << endl;
    return 0;
}