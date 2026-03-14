#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int left = i + 1;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[left] + arr[right] + arr[i];
            if (sum == 0) {
                res.push_back({arr[i], arr[left], arr[right]});
                left++;
                right--;
                while (left < right && arr[left] == arr[left - 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;
            }
            else if (sum < 0) left++;
            else right--;
        }
    }
    return res;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(arr);

    cout << "Triplets that sum to zero are:\n";
    for (auto &triplet : res) {
        cout << "[ ";
        for (auto num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}