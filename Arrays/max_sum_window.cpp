#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int maxSum = INT_MIN;
    int left = 0, sum = 0;
    int k = 3;

    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];
        if (right - left + 1 == k) {
            maxSum = max(maxSum, sum);
            sum -= nums[left];
            left++;
        }
    }

    cout << maxSum << endl;
    return 0;
}