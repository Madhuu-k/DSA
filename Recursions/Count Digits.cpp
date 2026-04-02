#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1;  // base case corrected
    return 1 + countDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;  // preserve original number
    int count = 0;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    cout << "Total Digits (Recursive): " << countDigits(n) - 1 << endl;
    cout << "Total Digits (Iterative): " << count << endl;

    return 0;
}