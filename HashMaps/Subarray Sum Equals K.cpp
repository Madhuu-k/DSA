#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int getCount(vector<int> arr, int k) {
    unordered_map<int, int> map;
    map[0] = 1;
    int currSum = 0;
    int count = 0;

    for (int x : arr) {
        currSum += x;
        int req = currSum - k;
        if (map.count(req)) count += map[req];
        map[currSum]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1, 1, 1, 2};
    int target = 2;
    cout << getCount(arr, target) << endl;
    return 0;
}