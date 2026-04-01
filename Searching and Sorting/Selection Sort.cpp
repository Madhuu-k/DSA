#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {10, 82, 73, 1, 48, 21, 20, 55, 39};

    // SAME AS BUBBLE BUT CHECKS FOR SMALLEST THEN SWAPS
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }

    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}