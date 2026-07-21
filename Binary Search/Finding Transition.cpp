#include<iostream>
#include<vector>
using namespace std;

int findIndex(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }

    return ans;
}

int main() {
    vector<int> arr = {10, 20, 50, 89, 30, 60};
    int target = 30;
    cout << findIndex(arr, target) << " --> " << arr[findIndex(arr, target)] << endl;
    return 0;
}