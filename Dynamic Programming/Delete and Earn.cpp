#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int deleteAndEarn(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;
    int maxVal = *max_element(arr.begin(), arr.end());
    int prev2 = 0;
    int prev1 = 0;
    vector<int> points(maxVal + 1, 0);
    for (int x : arr) {
        points[x] += x;
    }
    for (int i = 0; i <= maxVal; i++) {
        int curr = max(prev1, points[i] + prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {
    vector<int> arr = {2, 2, 3, 3, 3, 4};
    cout << deleteAndEarn(arr);
    return 0;
}