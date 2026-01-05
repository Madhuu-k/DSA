#include<iostream>
using namespace std;

int main() {
    string str; cout << "Enter string: "; cin >> str;
    int vowels = 0, consonants = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
        else consonants++;
    }
    cout << "Vowels: " << vowels << "\nConsonants: " << consonants;
    return 0;
}