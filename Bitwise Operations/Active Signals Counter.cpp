#include<iostream>
using namespace std;

int countActiveSignals(int signal) {
    int count = 0;
    while (signal >  0) {
        signal = signal & (signal - 1);
        count++;
    }
    return count;
}

int main() {
    int n; cin >> n;
    cout << countActiveSignals(n) << endl;
    return 0;
}