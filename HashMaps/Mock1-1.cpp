#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int findPairs(vector<int>& nums, int k) {
    unordered_set<int> set(nums.begin(), nums.end());
    int n = nums.size(), pairs = 0;
    for (int x : set) {
        int complement = abs(x - k);
        if (set.count(complement) && set.count(complement) != x) pairs++;
    }
    return pairs;
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;
    cout << findPairs(nums, k);
    return 0;
}