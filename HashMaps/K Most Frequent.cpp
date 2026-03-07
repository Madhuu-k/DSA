#include <algorithm>
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> Topkfrequent(vector<int> &arr, int k) {
    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;
    vector<pair<int, int>> pairs;
    for (auto it : freq) pairs.push_back({it.second, it.first});
    sort(pairs.begin(), pairs.end(), greater<>());
    vector<int> res;
    for (int i = 0; i < k; i++) res.push_back(pairs[i].second);
    return res;
}

int main() {
    vector<int> arr = {1,1,1,2,2,3};
    int k = 2;
    vector<int> res = Topkfrequent(arr, k);
    cout << "[ ";
    for (int x : res) cout  << x << " ";
    cout << "]";
    return 0;
}