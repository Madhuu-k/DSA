#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;

    for (int i = 0; i < arr.size(); i++) {
        if (i > 0 && arr[i] == arr[i-1]) continue;
        int left = i + 1, right = arr.size() - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0) {
                result.push_back({arr[i], arr[left], arr[right]});
                left++, right--;

                while (left < right && arr[left] == arr[left+1]) left++;
                while (left < right && arr[right] == arr[right-1]) right--;
            }

            else if (sum < 0) left++;
            else right++;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(arr);
    for (auto &res : result) {
        for (int x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}