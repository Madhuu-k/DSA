#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int longestSubarray(vector<int>& nums, int k) {
    unordered_map<int, int> map;
    int prefixSum = 0, maxLength = 0;
    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];
        if (prefixSum == k) maxLength = i + 1; // id(prefixSum % k == 0) divi++;
        if (map.count(prefixSum - k)) maxLength = max(maxLength, i - map[prefixSum - k]);
        if (!map.count(prefixSum)) map[prefixSum] = i;
    }
    return maxLength;
 }

int main() {
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;
    cout << longestSubarray(nums, k) << endl;
    return 0;
}