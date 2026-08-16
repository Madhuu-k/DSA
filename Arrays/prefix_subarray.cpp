#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, -1, 1, -1};
    int k = 0;

    unordered_map<int, int> mp;
    mp[0] = 1;
    int prefixSum = 0;
    int count = 0;

    for (int x : nums) {
        prefixSum += x;
        int needed = prefixSum - k;
        if (mp.find(needed) != mp.end()) count += mp[needed];
        mp[prefixSum]++; // 1 - 1
    }
}