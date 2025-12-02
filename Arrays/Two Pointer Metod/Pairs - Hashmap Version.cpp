#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];

        if (mp.count(need)) return {mp[need], i};
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(arr, target);
    for (int &it : result) cout << it << " ";
    return 0;
}