#include<iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if (str1.length() != str2.length()) {
        cout << "Not Anagram";
        return 0;
    }
    int freq[26] = {0};
    for (int i = 0; i < str1.length(); i++) freq[str1[i] - 'a']++;
    for (int i = 0; i < str2.length(); i++) freq[str2[i] - 'a']--;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }
    cout << "Is Anagram";
    return 0;
}