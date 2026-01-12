#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void Permutations(vector<int>& nums, vector<int>& curr, vector<bool>& used, vector<vector<int>>& ans) {
    if (curr.size() == nums.size()) {
        ans.push_back(curr);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;
        if (i > 0 && nums[i] == nums[i-1] && !used[i-1])
            continue;
        used[i] = true;
        curr.push_back(nums[i]);
        Permutations(nums, curr, used, ans);
        curr.pop_back();
        used[i] = false;
    }
}

int main() {
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> ans;
    vector<int> curr;
    vector<bool> used(nums.size(), false);

    sort(nums.begin(), nums.end());
    Permutations(nums, curr, used, ans);
    for (auto& comb : ans) {
        cout << "[ ";
        for (int num : comb) cout << num << " ";
        cout << "]\n";
    }
    return 0;
}