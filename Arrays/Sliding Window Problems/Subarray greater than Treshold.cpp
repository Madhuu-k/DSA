#include<iostream>
#include<vector>
using namespace std;

int numSubArrays(vector<int>& arr, int k, int threshold) {
    int left = 0;
    long long sum = 0;
    int count = 0;
    long long need = 1LL * k * threshold;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        if (right - left + 1 == k) {
            if (sum >= need) count++;
            sum -= arr[left];
            left++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {2, 2, 2, 2, 5, 5};
    int k = 3, tresh = 3;
    int result = numSubArrays(arr, k, tresh);
    cout << "Total subarrays greater than given threshold: " << result << endl;
    return 0;
}