#include<iostream>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter both strings: "; cin >> str1 >> str2;
    if (str1.length() != str2.length()) {
        cout << "Not equal strings" << endl;
        return 0;
    }

    string temp = str1 + str1;
    if (temp.find(str2) != string::npos) cout << "Yes";
    else cout << "No";
    return 0;
}