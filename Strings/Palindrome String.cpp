#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

bool isPlaindrome(string str) {
    if (str.length() == 0) return true;
    int left = 0, right = str.length() - 1;
    while (left <= right) {
        if (str[left] != str[right]) return false;
        left++; right--;
    }
    return true;
}

int main() {
    string str; cin >> str;
    if (isPlaindrome(str)) cout << "The string " << str << "is a plaindrome";
    else cout << "Not a palindrome";
    return 0;
}