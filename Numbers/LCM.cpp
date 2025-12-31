#include<iostream>
using namespace std;

int main() {
    int a, b, x, y; cout << "Enter A and B values: ";
    cin >> a >> b;
    x = a, y = b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    int gcd = a;
    int lcm = (x * y) / gcd;
    cout << "LCM is: " << lcm << endl;
    return 0;
}