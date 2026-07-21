#include <algorithm>
#include<iostream>
#include <sstream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string str; getline(cin, str);
    stringstream ss(str);
    vector<string> words;

    string word;
    while (ss >> word) words.push_back(word);

    string result = "";
    reverse(words.begin(), words.end());

    for (string s : words) result += s + " ";
    result.pop_back();

    cout << result;

    return 0;
}