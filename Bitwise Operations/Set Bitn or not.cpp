#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int k; cin >> k;
    bool result = (n & (1 << k));
    if (result) cout << "true";
    else cout << "false";

    return 0;
}