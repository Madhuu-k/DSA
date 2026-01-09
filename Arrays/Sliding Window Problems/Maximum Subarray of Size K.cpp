#include<iostream>
#include<vector>
using namespace std;

int MaxSubarrayOfK(vector<int>& arr, int k) {
    int n = arr.size(), l = 0;
    int windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];

    int maxSum = windowSum;
    for (int r = k; r < arr.size(); r++) {
        windowSum += arr[r];
        windowSum -= arr[l];
        maxSum = max(maxSum, windowSum);
        l++;
    }
    return windowSum;
}

int main() {
    vector<int> arr = {10, 20, 30, 1, 2, 4, 90};
    int maxSum = MaxSubarrayOfK(arr, 3);
    cout << "Max Sum of subarray: " << maxSum << endl;
    return 0;
}