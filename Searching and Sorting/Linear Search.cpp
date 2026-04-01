#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {10, 82, 73, 1, 48, 21, 20, 55, 39};
    int target = 90;
    bool found = false;

    for (int val : arr) {
        if (val == target) {
            found = true;
            break;
        }
    }

    if (!found) cout << "Not found";
    else cout << "Found";

    return 0;
}