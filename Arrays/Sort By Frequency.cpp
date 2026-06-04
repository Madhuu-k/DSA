#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    sort(arr.begin(), arr.end(),
        [&](int a, int b) {
            if (freq[a] == freq[b]) return a < b;
            return freq[a] > freq[b];
        });

    for (int x : arr) cout << x << " ";

    return 0;
}