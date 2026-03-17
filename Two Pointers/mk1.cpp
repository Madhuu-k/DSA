#include<iostream>
#include<unordered_map>
using namespace std;

bool validPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    int count = 1;
    while (left <= right) {
        if (s[left] != s[right] && count != 0) {
            left++; count--;
        }
        else return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string s= "abca";
    cout << (validPalindrome(s) ? "True" : "False") << endl;
    return 0;
}