#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int kthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int x : nums) {
        pq.push(x);
        if (pq.size() > k) pq.pop();
    }

    return pq.top();
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int k = 3;
    cout << "Kth Largest element: " << kthLargest(nums, k) << endl;
    return 0;
}