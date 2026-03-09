#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;

int longestSubstringKDistinct(string s, int k) {
    unordered_map<char, int>  map;
    int len = 0;
    int left = 0;
    for (int right = 0; right < s.length(); right++) {
        map[s[right]]++;

        while (map.size() > k) {
            map[s[left]]--;
            if (map[s[left]] == 0) map.erase(s[left]);
            left++;
        }

        len = max(len, right - left + 1);
    }
    return len;
}

int main() {
    string s = "eceba";
    int k = 2;
    cout << longestSubstringKDistinct(s, k) << endl;
    return 0;
}