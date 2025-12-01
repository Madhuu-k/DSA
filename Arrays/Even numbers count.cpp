#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {3, 6, 12, 9, 11, 24};
    int evenCount = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) evenCount++;
    }
    cout << "Even numbers in the given array: " << evenCount << endl;
    return 0;
}