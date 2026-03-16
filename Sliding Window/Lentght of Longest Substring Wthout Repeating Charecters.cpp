#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<int, int> map;
    int left = 0, maxLen = 0;
    for(int right = 0; right < s.length(); right++){
        map[s[right]]++;
        while(map[s[right]] > 1) {
            map[s[left]]--;
            if(map[s[left]] == 0) map.erase(s[left]);
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    string str = "Madhuk";
    cout << lengthOfLongestSubstring(str) << endl;
    return 0;
}