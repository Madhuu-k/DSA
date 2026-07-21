#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string newWord = "";

    // int i = 0, n = s.length();
    // while (i < n) {
    //     int j = i;
    //     int count = 0;
    //
    //     while (j < n && s[i] == s[j]) {
    //         count++;
    //         j++;
    //     }
    //
    //     newWord += s[i];
    //     newWord += to_string(count);
    //
    //     i = j;
    // }

    int i = 0, n = s.length();
    while (i < n) {
        int j = i;
        int count = 0;

        while (j < n && s[i] == s[j]) {
            count++;
            j++;
        }
        newWord += s[i];
        newWord += to_string(count);

        i = j;
    }

    cout << newWord << endl;

    return 0;
}