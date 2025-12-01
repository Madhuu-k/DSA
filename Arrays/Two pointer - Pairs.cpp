#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 8, 11};
    int target = 10;
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        if (arr[left] + arr[right] == target) {
            cout << "1st Index: " << left << " Second Index: " << right << endl;
            break;
        }
        left++; right--;
    }
    return 0;
}