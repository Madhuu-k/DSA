#include<iostream>
#include<vector>
#include<unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> intersectionPoint(vector<int> &arr1, vector<int> &arr2) {
    unordered_set<int> s(arr1.begin(), arr1.end());
    unordered_set<int> result;

    for (int x : arr2) {
        if (s.count(x)) result.insert(x);
    }

    return vector<int>(result.begin(), result.end());
}

int main() {
    vector<int> arr1 = {1, 2, 2, 1};
    vector<int> arr2 = {2, 2};
    vector<int> result = intersectionPoint(arr1, arr2);
    for (int x : result) cout << "[" << x << "]";
    return 0;
}