#include<iostream>
using namespace std;

int main() {
    int n; cout << "Enter the number: ";
    cin >> n;
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    cout << count << endl;
    return 0;
}