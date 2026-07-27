#include<iostream>
#include<vector>
#include<unordered_set>
#include <queue>
using namespace std;

int main() {
    int left = 0;
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    queue<int> q;
    vector<int> ans;

    for (int right = 0; right < arr.size(); right++) {
        if (arr[right] < 0) q.push(right);
        if (right - left + 1 == k) {
            while (!q.empty() && q.front() < left) q.pop();
            if (q.empty()) ans.push_back(0);
            else ans.push_back(arr[q.front()]);

            left++;
        }
    }

    unordered_set<int> s;
    s.insert(ans.begin(), ans.end());
    for (int x : s)  cout << x << " ";

    return 0;
}