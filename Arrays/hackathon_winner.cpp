#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string winner(string erica, string bob) {
    string res = "tie";
    int e = 0, b = 0;

    for (char c : erica) {
        if (c == 'E') e += 1;
        else if (c == 'M') e += 3;
        else if (c == 'H') e += 5;
    }

    for (char c : bob) {
        if (c == 'E') b += 1;
        else if (c == 'M') b += 3;
        else if (c == 'H') b += 5;
    }

    res = (e > b) ? "Erica" : "Bob";

    return res;
}

int main() {
    string erica, bob;
    cout<<"Enter Erica and Bob: ";
    cin >>erica >> bob;
    string res = winner(erica, bob);
    cout<<res<<endl;
    return 0;
}