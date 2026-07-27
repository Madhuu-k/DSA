#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;
    int k; cin >> k;

    n ^= (1 << k);
    cout << n << endl;

    return 0;
}