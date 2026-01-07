#include<iostream>
using namespace std;

bool isPowerOf2(int n) {
    return (n > 0 && (n & (n - 1)) == 0);
}

int main() {
    int n; cout << "Enter the number: ";
    cin >> n;
    cout << (isPowerOf2(n) ? "Yes" : "No") << endl;
    return 0;
}