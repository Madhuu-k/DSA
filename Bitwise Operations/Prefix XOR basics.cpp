#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 5, 7, 3};
    vector<int> pre(arr.size());

    pre[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) pre[i] = pre[i-1] ^ arr[i];

    for (int x : pre) cout << x << " ";
}