#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> twoSum;
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (map.count(complement)) cout << map[complement] << " " << i << endl;
        map[arr[i]] = i;
    }
    return 0;
}