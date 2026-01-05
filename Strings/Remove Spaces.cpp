#include<iostream>
using namespace std;

int main() {
    string str, res=""; cout << "Enter sentence: ";
    getline(cin, str);
    for (char c : str) {
        if (c != ' ') res += c;
    }
    cout << res << endl;
    return 0;
}