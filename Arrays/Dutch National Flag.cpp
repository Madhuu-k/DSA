#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 0, 2, 2, 0, 1, 1, 0, 2};
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[mid], arr[low]);
            low++, mid++;
        }
        else if (arr[mid] == 1) mid++;
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    cout << "Dutch National Flag" << endl;
    for (int x : arr) cout << x << " ";
    return 0;
}