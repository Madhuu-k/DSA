#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum += fact(digit);   // 🔥 main logic
        temp /= 10;
    }

    if (sum == n)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}