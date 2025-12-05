#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int longestKMostDistinct(string s, int k) {
    unordered_map<char, int> mp;
    int left = 0, best = 0;

    for (int right = 0; right < s.size(); right++) {
        mp[s[right]]++;

        while (mp.size() > k) {
            char leftChar = s[left];
            mp[leftChar]--;

            if (mp[leftChar] == 0) mp.erase(leftChar);

            left++;
        }
        best = max(best, right - left + 1);
    }
    return best;
}

int main() {
    string s = "eceba";
    int k = 2;
    int result = longestKMostDistinct(s, k);
    cout << result << endl;
    return 0;
}
