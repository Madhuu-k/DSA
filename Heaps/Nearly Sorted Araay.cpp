#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void sortK(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int idx = 0;

    for (int i = 0; i < arr.size(); i++) {
        pq.push(arr[i]);
        if (pq.size() > k) {
            arr[idx++] = pq.top();
            pq.pop();
        }
    }

    while (!pq.empty()) {
        arr[idx++] = pq.top();
        pq.pop();
    }
}

int main() {
    vector<int> arr = {6, 5, 3, 2, 8, 10, 9};
    cout << "Before sorting: ";
    for (int x : arr) cout << x << " ";
    int k = 3;
    sortK(arr, k);
    cout << "\nAfter Sorting: ";
    for (int x : arr) cout << x << " ";
    return 0;
}