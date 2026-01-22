#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int robLinear(vector<int>& nums, int l, int r) {
    int prev1 = 0, prev2 = 0;
    for (int i = l; i <= r; i++) {
        int curr = max(prev1, nums[i] + prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    int first = robLinear(nums, 1, n - 1);
    int second = robLinear(nums, 0, n - 2);
    return max(first, second);
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout << "Max: " << rob(nums) << endl;
    return 0;
}