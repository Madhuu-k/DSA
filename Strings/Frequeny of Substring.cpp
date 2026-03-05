#include<iostream>
#include<string>
using namespace std;

int frequency(string& s, string& t) {
    int count = 0;
    int n = s.length();
    int m = t.length();

    for (int i = 0; i <= n - m; i++) {
        bool valid = true;
        for (int j = 0; j < m; j++) {
            if (s[i + j] != t[j]) {
                valid = false;
                break;
            }
        }
        if (valid) count++;
    }
    return count;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << frequency(s,t) << endl;
    return 0;
}