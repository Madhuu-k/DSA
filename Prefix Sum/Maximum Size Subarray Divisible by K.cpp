#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int SubArrayDivByK(vector<int> &arr, int k) {
    int prefixSum = 0, count = 0;
    unordered_map<int, int> map;
    map[0] = 1;
    for (int num : arr) {
        prefixSum += num;
        int mod = prefixSum % k;
        if (mod < 0) mod += k;
        if (map.count(mod)) count += map[mod];
        map[mod]++;
    }
    return count;
}

int main() {
    vector<int> arr = {4,5,0,-2,-3,1};
    int k = 5;
    cout << SubArrayDivByK(arr, k);
    return 0;
}