#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int KthSmallest(vector<int>& arr, int k) {
    priority_queue<int> pq;

    for (int i = 0; i < arr.size(); i++) {
        pq.push(arr[i]);

        if (pq.size() > k) pq.pop();
    }
    return pq.top();
}

int main() {
    vector<int> arr = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int k = 4;
    cout << "Smallest Element: " << KthSmallest(arr, k);
    return 0;
}