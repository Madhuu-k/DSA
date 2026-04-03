#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    string str; cout << "Enter Sentence of string: "; getline(cin, str);
    // int freq[256] = {0};
    // for (int i = 0; i < str.length(); i++) freq[str[i]]++;
    // for (int i = 0; i < 256; i++) {
    //     if (freq[i] > 0) {
    //         cout << char(i) << "->" << freq[i] << endl;
    //     }
    // }
    unordered_map<char, int> freq;
    for (int i = 0; i < str.length(); i++) freq[str[i]]++;
    for (auto it : freq) {
        if (it.first != ' ') cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}