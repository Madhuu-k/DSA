#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int left = 0, startIndex = 0, sum = 0;
    int maxSum = INT_MIN;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        if (right - left + 1 == k) {
            if (sum > maxSum) {
                maxSum = sum;
                startIndex = left;
            }

            sum -= arr[left];
            left++;
        }
    }

    cout << "Maximum Sum: " << maxSum << endl;
    cout << "Subarray: [ ";
    for (int i = startIndex; i <= startIndex + k - 1; i++) cout << arr[i] << " ";
    cout << "]" << endl;
    return 0;
}