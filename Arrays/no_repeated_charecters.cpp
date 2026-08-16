#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    string s; cout << "Enter string: "; cin >> s;
    unordered_map<char, int> freq;
    int maxLen = INT_MIN;

    int left = 0;

    for (int right = 0; right < s.length(); right++) {
        freq[s[right]]++;
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) freq.erase(s[right]);
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }

    cout << maxLen << endl;
    return 0;
}