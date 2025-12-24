#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class MedianFinder {
    priority_queue<int> left; // Max heap
    priority_queue<int, vector<int>, greater<int>> right; // Min heap

public:
    void addNum(int num) {
        if (left.empty() || num <= left.top()) left.push(num);
        else right.push(num);

        // Balance heaps
        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        } else if (left.size() < right.size()) {
            left.push(right.top());
            right.pop();
        }
    }

    double findMedian() {
        if (left.size() == right.size())
            return (left.top() + right.top()) / 2.0;
        return left.top();
    }
};

int main() {
    MedianFinder mf;
    vector<int> arr = {10, 3, 29, 4, 82, 32};

    for (int num : arr) {
        mf.addNum(num);
        cout << "Inserted " << num << ", Current Median = " << mf.findMedian() << endl;
    }

    return 0;
}