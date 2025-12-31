#include<iostream>
using namespace std;

int main() {
    int n; cout << "Enter the number "; cin >> n;
    int rev = 0;
    int temp = n;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (rev == temp) cout << "It is a Palindrome";
    else cout << "Not a Palindrome";
    return 0;
}