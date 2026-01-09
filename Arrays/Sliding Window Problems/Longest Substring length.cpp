#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longestLenghtOfSubstring(string str) {
    vector<int> freq(256, 0);
    int l = 0, maxLen = 0;
    for (int r = 0; r < str.length(); r++) {
        freq[str[r]]++;
        while (freq[str[r]] > 1) {
            freq[str[l]]--;
            l++;
        }
        maxLen = max(maxLen, r - l + 1);
    }
    return maxLen;
}

int main() {
    string str = "abcabcbb";
    int result = longestLenghtOfSubstring(str);
    cout << "Longest substring length: " << result << endl;
    return 0;
}