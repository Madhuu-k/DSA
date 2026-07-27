#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    cout << count << endl;
}

// 5 - 0101
// 4 - 0010
// & - 0000
