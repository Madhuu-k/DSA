#include<iostream>
#include<vector>
using namespace std;

void getPermutations(vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans, vector<bool>& used) {
    if (curr.size() == nums.size()) {
        ans.push_back(curr);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;

        used[i] = true;
        curr.push_back(nums[i]);
        getPermutations(nums, curr, ans, used);
        curr.pop_back();
        used[i] = false;
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> curr;
    vector<bool> used(nums.size(), false);
    getPermutations(nums, curr, ans, used);
    cout << "All Possible Permutations are:\n";
    for (auto& comb : ans) {
        cout << "[ ";
        for (int num : comb) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}