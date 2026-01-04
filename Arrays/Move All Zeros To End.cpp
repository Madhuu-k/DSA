#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr  = {1, 0, 0, 2, 5, 3, 0, 5, 0};
    int idx = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) arr[idx++] = arr[i];
    }

    while (idx < arr.size()) arr[idx++] = 0;
    cout << "Re-Zeroed Array: \n";
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}