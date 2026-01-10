#include<iostream>
using namespace std;

bool isPalindrome(string s, int l, int r) {
    if (s.size() == 1) return true;
    if (s[l] != s[r]) return false;
    if (l >= r) return true;
    return  isPalindrome(s, l + 1, r - 1);
}

int main() {
    string s;
    cout << "Enter the string: "; cin >> s;
    cout << "The String "  << s << " is a palindrome: " << (isPalindrome ? "Yes" : "No");
    return 0;
}