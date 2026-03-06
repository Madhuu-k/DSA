#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> mp;
    for (int i = 0; i < 10; i++) mp[i] = i;
    mp[4] = 99;
    if (mp.find(10) != mp.end()) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    for (int i = 0; i < mp.size(); i++) cout << mp[i] << endl;
    return 0;
}