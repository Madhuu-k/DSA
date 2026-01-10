#include <iostream>
using namespace std;

void sequence(string s, int i, string curr) {
    if (i == s.size()) {
        cout << curr << " ";
        return;
    }
    // Take
    sequence(s, i + 1, curr + s[i]);

    // No Take
    sequence(s, i + 1, curr);
}

int main() {
    string s; string curr = "";
    cout << "Enter string: "; cin >> s;
    sequence(s, 0, curr);
    return 0;
}