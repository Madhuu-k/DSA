#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 2, 3};
    int target = 2;
    int index = -1;

    sort(arr.begin(), arr.end());
    int l = 0, r = arr.size() - 1;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == target) {
            index = m;
            l = m + 1;
        }

        if(arr[m] < target) l = m + 1;
        else r = m - 1;
    }

    if (index != -1) cout << index << endl;
    else cout << "Not Found";

    return 0;
}