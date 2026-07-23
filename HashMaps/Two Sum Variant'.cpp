#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

pair<int, int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (map.count(complement)) return {map[complement], i};
        map[arr[i]] = i;
    }
    return {-1, -1};
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;
    pair<int, int> result = twoSum(arr, target);
    for (pair<int, int> p : result) cout << result.second << " ";
    return 0;
}