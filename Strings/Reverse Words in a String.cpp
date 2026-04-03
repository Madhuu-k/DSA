#include<iostream>
#include<algorithm>
#include <sstream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s; getline(cin, s);
    stringstream ss(s);
    vector<string> words;
    string word;

    while (ss >> word) words.push_back(word);
    reverse(words.begin(), words.end());

    string result = "";
    for (string w : words) {
        result += w + " ";
    }

    result.pop_back();

    cout << result;
    return 0;
}