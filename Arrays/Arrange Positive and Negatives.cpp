#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> pos, neg, zer;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ans;

    for (int x : arr) {
        if (x > 0) neg.push_back(x);
        if (x < 0) pos.push_back(x);
        if (x == 0) zer.push_back(x);
    }

    int i = 0, j = 0;
    while (i < neg.size() && j < pos.size()) {
        ans.push_back(neg[i++]);
        ans.push_back(pos[j++]);
    }
    while (i < neg.size()) ans.push_back(neg[i++]);
    while (j < pos.size()) ans.push_back(pos[j++]);
    for (int x : zer) ans.push_back(x);

    for (int x : ans) cout << x << " ";

    return 0;
}