#include<iostream>
#include<vector>
using namespace std;

vector<int> square(vector<int> &arr) {
    int left = 0, right = arr.size() - 1;
    int n = arr.size();
    vector<int> res(n);
    int pos = n - 1;
    while (left <= right) {
        int leftSqt = arr[left] * arr[left];
        int rightSqt = arr[right] * arr[right];
        if (leftSqt > rightSqt) {
            res[pos] = leftSqt;
            left++;
        }
        else {
            res[pos] = rightSqt;
            right--;
        }
        pos--;
    }
    return res;
}

int main() {
    vector<int> arr = {-4, -1, 0, 3, 10};
    vector<int> res = square(arr);
    for (auto i : res) cout << i << " ";
    return 0;
}