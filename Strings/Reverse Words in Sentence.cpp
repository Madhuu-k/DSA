#include<iostream>
#include<algorithm>
using namespace std;

string reverseWords(string sentence) {
    int start = 0;
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            reverse(sentence.begin() + start, sentence.begin() + i);
            start = i + 1;
        }
    }
    return sentence;
}


int main() {
    string sentence;
    getline(cin, sentence);
    cout << reverseWords(sentence) << endl;
    return 0;
}
