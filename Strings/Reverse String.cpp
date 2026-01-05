#include<iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int l = 0, r = s.length() - 1;
    while (l <= r) {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++; r--;
    }
    cout << "Reversed string: " << s << endl;
    return 0;
}