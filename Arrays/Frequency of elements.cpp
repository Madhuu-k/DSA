#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int> arrr = {10, 30, 20, 72, 92, 92, 10};
    unordered_map<int, int> freq;
    for (int i = 0; i < arrr.size(); i++) freq[arrr[i]]++;
    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] > 0) cout << i << " -> " << freq[i] << endl;
    }
    return 0;
}