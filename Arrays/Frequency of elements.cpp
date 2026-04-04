#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void freqMap(int arr[], int n) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    freqMap(arr, n);
    return 0;
}
