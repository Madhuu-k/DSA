#include<iostream>
#include<vector>
using namespace std;

void Combinations(vector<int>& nums, int i, int target, vector<int>& curr, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(curr);
        return;
    }

    if (i == nums.size() || target < 0) return;

    // Take Reuse Allowed
    curr.push_back(nums[i]);
    Combinations(nums, i, target - nums[i], curr, ans);
    curr.pop_back();

    // Dont take
    Combinations(nums, i + 1, target, curr, ans);
}

int main() {
    vector<int> nums = {2,3,6,7};
    int target = 7;
    vector<int> curr;
    vector<vector<int>> ans;
    Combinations(nums, 0, target, curr, ans);
    cout << "Combinations that sum to " << target << ":\n";
    for (auto& comb : ans) {
        cout << "[ ";
        for (int num : comb) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}