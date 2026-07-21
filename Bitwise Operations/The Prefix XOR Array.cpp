#include<iostream>
#include<vector>
using namespace std;

vector<int> solveRangeXOR(vector<int>& arr, vector<pair<int, int>>& queries) {
    int n = arr.size();
    vector<int> prefix(n+1, 0);
    vector<int> result;

    for (int i = 0; i < n; i++) prefix[i + 1] = prefix[i] ^ arr[i];

    for (auto& q : queries) {
        int l = q.first();
        int r = q.second();

        int range = prefix[r + 1] ^ prefix[l];
        result.push_back(range);
    }

    return result;
}

