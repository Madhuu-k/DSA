#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<int> arr = {-8, 2, 3, -6, 1};
    int n = arr.size();

    vector<int> res;
    int k = 2;

    for (int i = 0; i <= (n - k); i++) {
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                res.push_back(arr[i + j]);
                found = true;
                break;
            }
        }
        if (!found) res.push_back(0);
    }

    for (int x : res) cout << x << " ";

    return 0;
}
