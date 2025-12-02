#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,6,8,11};
    sort(arr.begin(), arr.end());
    int target = 10;
    bool isAvailable = false;
    int l = 0;
    int r = arr.size() - 1;
    while (l < r) {
        int sum = arr[l] + arr[r];
        if (sum == target) {
            isAvailable = true;
            break;
        }
        else if (sum < target) l++;
        else r--;
    }
    if (isAvailable) cout << "Yes";
    else cout << "No";

    return 0;
}