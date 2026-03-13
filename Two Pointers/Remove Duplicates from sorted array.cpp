#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &arr) {
    if (arr.size() == 0) return 0;
    int left = 0;
    for (int right = 1; right < arr.size(); right++) {
        if (arr[right] != arr[left]) {
            left++;
            arr[left] = arr[right];
        }
    }
    return left + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3};
    cout << removeDuplicates(arr) << endl;
    return 0;
}