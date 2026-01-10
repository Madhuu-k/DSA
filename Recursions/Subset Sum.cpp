#include<iostream>
#include<vector>
using namespace std;

void subsetsum(vector<int>& nums, int sum, vector<int>& ans, int i)
{
    if (i == nums.size()) {
        ans.push_back(sum);
        return;
    }
    // Take
    subsetsum(nums, nums[i] + sum, ans, i + 1);

    // Dont Take
    subsetsum(nums, sum, ans, i + 1);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> ans;
    subsetsum(nums, 0, ans, 0);
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }

    return 0;
}