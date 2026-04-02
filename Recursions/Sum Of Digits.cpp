#include<iostream>
using namespace std;


// Recursive approach
int sumOfdigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfdigits(n / 10);
}

// Iterative approach
int main() {
    int n; cout << "Enter the number: ";
    cin >> n;
    int sum = 0, temp = 0;
    while (n > 0) {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }
    cout << "Sum of Digits: " << sum;
    return 0;
}