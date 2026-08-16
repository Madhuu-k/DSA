#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int r = str.length() - 1;
    while (str[r] == 'a' || str[r] == 'e' || str[r] == 'i' || str[r] == 'o' || str[r] == 'u') r--;
    cout << "Removing vowels at the end: " << str.substr(0, r + 1);

    return 0;
}