#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> TwoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.count(complement)) return {map[complement], i};
        map[nums[i]] = i;
    }
    return {};
}

int main() {
    int n; cout << "Enter the number of elements: "; cin >> n;
    cout << "Enter elements: ";
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int target; cout << "Enter target: "; cin >> target;
    vector<int> result = TwoSum(nums, target);
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
    return 0;
}