#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longestLenghtOfSubstring(string str) {
    vector<int> freq(256, 0);
    int left = 0, best = 0;

    for (int right = 0; right < str.size(); right++) {
        freq[str[right]]++;

        while (freq[str[right]] > 1) {
            freq[str[left]]--;
            left++;
        }

        best = max(best, right - left + 1);
    }

    return best;
}

int main() {
    string str = "abcabcbb";
    int result = longestLenghtOfSubstring(str);
    cout << "Longest substring length: " << result << endl;
    return 0;
}