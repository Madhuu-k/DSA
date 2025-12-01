#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int> arr = {4, 9, 4, 9, 4, 7};
    unordered_map<int, int> freq;

    for (int x : arr) freq[x]++;

    for (auto x : freq) cout << x.first << " appears " << x.second << " time(s)"<< endl;
    return 0;

}