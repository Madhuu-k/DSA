#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;

vector<int> result(vector<int>& arr, int k) {
    vector<int> result;
    deque<int> dq;
    int left = 0;

    for (int right = 0; right < arr.size(); right++) {
        if (arr[right] < 0) dq.push_back(right);

        if (right - left + 1 == k) {
            if (dq.empty()) result.push_back(0);
            else result.push_back(arr[dq.front()]);

            if (!dq.empty() && dq.front() == left) dq.pop_front();
            left++;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {12, -1, -7, 8, -13, 30, 16, 28};
    int k = 3;
    vector<int> res = result(arr, k);
    for (const auto& it: res) cout << it << " ";
    return 0;
}