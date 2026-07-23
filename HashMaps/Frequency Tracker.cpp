#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int firstUniqueCharecter(string& s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i]] == 1) return i;
    }
    return -1;
}

int main() {
    string s = "aabbcccdeeffgh";
    int result = firstUniqueCharecter(s);
    cout << s[result] << endl;
    return 0;
}