#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int>& nums, int i, vector<int>& curr, vector<vector<int>>& ans) {
    if (i == nums.size()) {
        ans.push_back(curr);
        return;
    }
    // Take
    curr.push_back(nums[i]);
    subset(nums, i + 1, curr, ans);

    // Dont Take
    curr.pop_back();
    subset(nums, i + 1, curr, ans);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> curr;
    subset(nums, 0, curr, ans);
    cout << "Subsets are:\n";
    for (auto& v : ans) {
        cout << "{ ";
        for (auto& x : v) {
            cout << x << " ";
        }
        cout << "}\n";
    }
    return 0;
}