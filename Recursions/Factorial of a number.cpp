#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n; cout << "N value to find factorial: ";
    cin >> n;
    int result = factorial(n);
    cout << "Factorial of " << n << " is " << result;
    return 0;
}