#include<iostream>
#include<vector>
using namespace std;

int LongestRepeatingChars(string s, int k) {
    vector<int> freq(26, 0);
    int l = 0, maxLen = 0, maxFreq = 0;
    for (int r = 0; r < s.size(); r++) {
        freq[s[r] - 'A']++;
        maxFreq = max(maxFreq, freq[s[r] - 'A']);
        while ((r - l + 1) - maxFreq > k) {
            freq[s[r] - 'A']--;
            l++;
        }
        maxLen = max(maxLen, r - l + 1);
    }
    return maxLen;
}

int main() {
    string s = "AABABBA";
    int k = 1;
    int result = LongestRepeatingChars(s, k);
    cout << "Longest Repeating Characters of size K: " << result;
    return 0;
}