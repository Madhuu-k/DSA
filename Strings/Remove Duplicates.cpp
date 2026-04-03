#include <algorithm>
#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
    string str; cin >> str;
    unordered_set<char> seen;
    string res;
    for (char c : str) {
        if (seen.find(c) == seen.end()) {
            res += c;
            seen.insert(c);
        }
    }
    cout << "Removed Duplcates: " << res << endl;
    sort(res.begin(), res.end());
    cout << "Removed Duplicates in Order: " << res << endl;

    return 0;
}