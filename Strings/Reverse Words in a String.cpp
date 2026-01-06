#include<iostream>
using namespace std;

int main() {
    string str; cout << "Enter the sentence: ";
    getline(cin, str);
    string result = "";
    int i = str.length() - 1;
    cout << "Original String: " << str;
    while (i >= 0) {
        if (i >= 0 && str[i] == ' ') i--;
        if (i < 0) break;
        string word = "";
        while (i >= 0 && str[i] != ' ') {
            word = str[i] + word;
            i--;
        }
        if (result.length() == 0) result = word;
        else result = result + " " + word;
    }
    cout << "\nReversed: " << result << endl;
    return 0;
}