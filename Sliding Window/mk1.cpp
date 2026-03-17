#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int longestSubstring(string str, int k) {
    unordered_map<char, int> map;
    int left = 0, maxLen = 0;

    for (int right = 0; right < str.length(); right++) {
        map[str[right]]++;
        while (map.size() > k) {
            map[str[left]]--;
            if (map[str[left]] == 0) map.erase(str[left]);
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s = "aabacbebebe";
    int k = 3;
    cout << longestSubstring(s, k) << endl;
}