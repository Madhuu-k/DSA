#include<iostream>
using namespace std;

bool isPalindrome(string& str) {
    if (str.length() == 0) return false;
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++; right--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter the first string: "; cin >> str;
    cout << (isPalindrome(str) ? "Yes" : "No") << endl;
    return 0;
}