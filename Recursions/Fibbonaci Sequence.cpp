#include<iostream>
using namespace std;

int fibb(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibb(n - 1) + fibb(n - 2);
}

int main() {
    int n; cout << "Enter number of digits to print: "; cin >> n;
    int a = 0, b = 1;
    int sum = 0;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        sum = a + b;
        a = b;
        b = sum;

        cout << sum << " ";
    }
    return 0;
}