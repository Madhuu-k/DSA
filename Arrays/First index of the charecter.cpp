#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {5, 3, 7, 3, 9, 3};
    int target = 3;
    int index = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    cout << "First index of " << target << " is " << index << endl;
    return 0;
}