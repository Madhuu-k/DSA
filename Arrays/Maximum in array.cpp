#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 1, 9, 4};
    int n = arr.size();
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    cout << "Maximum value is " << max << endl;
    return 0;
}