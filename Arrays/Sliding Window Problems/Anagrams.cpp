#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> Anagrams(string s, string p) {
    vector<int> result;
    if (p.size() > s.size()) return result;

    vector<int> freqP(26, 0) , freqW(26, 0);
    for (char c : p) freqP[c - 'a']++;

    int left = 0;
    for (int right = 0; right < s.size(); right++) {
        freqW[s[right] - 'a']++;
        if (right - left + 1 == p.size()) {
            if (freqW == freqP) result.push_back(left);
            freqW[s[left] - 'a']--;
            left++;
        }
    }
    return result;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> result = Anagrams(s, p);
    for (auto& it  : result) cout << it << " ";
    return 0;
}