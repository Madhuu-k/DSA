#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int sum = 0, maxSum = INT_MIN;
    int left = 0;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        if (right - left + 1 == k) {
            maxSum = max(maxSum, sum);
            sum -= arr[left];
            left++;
        }
    }
    cout << "Max Sum in the array: " << maxSum << endl;
}