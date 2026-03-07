#include<iostream>
#include<unordered_map>
using namespace std;

bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) return false;
    unordered_map<char, int> mp;
    for (int i = 0; i < str1.length(); i++) mp[str1[i]]++;
    for (int i = 0; i < str2.length(); i++) mp[str2[i]]--;
    for (auto it : mp) {
        if (it.second != 0) return false;
    }
    return true;
}

int main() {
    string s1, s2;
    cout << "Enter first string: "; cin >> s1;
    cout << "Enter second string: "; cin >> s2;
    cout << (isAnagram(s1, s2) ? "It is an Anagaram" : "It is not an Anagaram") << endl;
    return 0;
}