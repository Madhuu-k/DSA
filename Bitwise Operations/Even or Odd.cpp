#include<iostream>
using namespace std;

int main() {
    int n; cout << "Enter the number: ";
    cin >> n;
    bool result = (n & 1);
    cout << (result ? "Odd" : "Even") << endl;
    return 0;
}