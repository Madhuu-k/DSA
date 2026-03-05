#include<iostream>
using namespace std;

bool isAnagram(string& str1, string& str2) {
    if (str1.length() != str2.length()) return false;
    int freq[26] = {0};
    for (char c : str1) freq[c - 'a']++;
    for (char c : str2) freq[c - 'a']--;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) return false;
    }
    return true;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: "; cin >> str1;
    cout << "Enter the second string: "; cin >> str2;
    cout << (isAnagram(str1, str2) ? "Yes" : "No");
    return 0;
}