#include<iostream>
using namespace std;

bool checkSetBit(int n) {
    return (n > 0 && ((n & (n - 1)) == 0));
}


int main() {
    int n; cout << "Enter the number: ";
    cin >> n;
    cout << (checkSetBit(n) ? "Yes" : "No");
    return 0;
}