#include<iostream>
#include<vector>
using namespace std;

int XoRUpto(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    int l, r;
    cin >> l >> r;
    cout << (XoRUpto(r) ^ XoRUpto(l - 1)) << endl;
    return 0;
}