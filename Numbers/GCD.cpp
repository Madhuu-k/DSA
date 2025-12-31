#include<iostream>
using namespace std;

int main() {
    int a, b; cout << "Enter A and B values: "; cin >> a >> b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << "GCD: " << a << endl;
    return 0;
}