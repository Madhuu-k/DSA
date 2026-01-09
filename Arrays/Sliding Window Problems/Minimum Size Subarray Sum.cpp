#include<iostream>
#include<vector>
using namespace std;

int minimumSizeSubArray(vector<int>& arr, int target) {
    int l = 0, sum = 0;
    int n = arr.size();
    int min_len = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        while (sum >= target) {
            min_len = min(min_len, i - l + 1);
            sum -= arr[l];
            l++;
        }
    }
    return (min_len == INT_MAX) ? -1 : min_len;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 60};
    int target = 60;
    cout << "Minimum Length: " << minimumSizeSubArray(arr, target) << endl;
    return 0;
}