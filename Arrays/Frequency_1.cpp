#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    int n; cout << "Enter number of elements: "; cin >> n;
    vector<int> arr(n); cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    for (auto x : freq) {
        if (x.second == 1) {
            cout << x.first << endl;
            break;
        }
    }

    return 0;
}