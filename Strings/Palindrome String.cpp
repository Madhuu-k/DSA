#include<iostream>
using namespace std;

int main() {
    string s; cout << "Enter a string: "; cin >> s;
    int l = 0, r = s.length() - 1;
    bool isPalindrome = true;
    while (l < r) {
        if (s[l] != s[r]) {
            isPalindrome = false;
            break;
        }
        l++; r--;
    }
    cout << (isPalindrome ? "Yes" : "No");
    return 0;
}