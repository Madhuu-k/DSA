#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> map;
    int n = nums.size();
    if (n == 0 || n == 1) return false;
    for (int i = 0; i < n; i++) map[nums[i]]++;
    for (auto it : map) {
        if (it.second > 1) return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number of elements: "; cin >> n;
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) mp[arr[i]]++;
    cout << "Frequency of duplicate elements: \n";
    for (auto it : mp) {
        if (it.second > 1) cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}