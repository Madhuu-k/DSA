#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Combinations(vector<int>& nums, vector<int>& curr,
                  vector<vector<int>>& ans,
                  int idx, int target) {

    if (target == 0) {
        ans.push_back(curr);
        return;
    }

    for (int i = idx; i < nums.size(); i++) {

        // skip duplicates at same level
        if (i > idx && nums[i] == nums[i - 1]) continue;

        if (nums[i] > target) break;

        curr.push_back(nums[i]);
        Combinations(nums, curr, ans, i + 1, target - nums[i]);
        curr.pop_back(); // backtrack
    }
}

int main() {
    vector<int> nums = {10, 1, 2, 7, 6, 1, 5};
    vector<vector<int>> ans;
    vector<int> curr;
    int target = 8;

    sort(nums.begin(), nums.end());

    Combinations(nums, curr, ans, 0, target);

    cout << "Combinations that sum to " << target << ":\n";
    for (auto& comb : ans) {
        cout << "[ ";
        for (int num : comb) cout << num << " ";
        cout << "]\n";
    }
    return 0;
}
