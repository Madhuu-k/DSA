#include<iostream>
#include<string>
using namespace std;

string encrypt(string str, int key) {
    for (char &c : str) {
        c = (c - 'a' + key) % 26 + 'a';
    }
    return str;
}

string decrypt(string str, int key) {
    for (char &c : str) {
        c =  (c - 'a' - key + 26) % 26 + 'a';
    }
    return str;
}

int main() {
    string str = "madhu";
    int key = 2;
    cout << "Encrypted string is: " << encrypt(str, key) << endl;
    cout << "Decrypted string is: " << decrypt(encrypt(str, key), key) << endl;
    return 0;
}