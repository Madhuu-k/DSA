#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 29, 67, 82, 32, 94};
    int first = -1e9, second = -1e9;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
    }
    cout << "Second Largest: " << second << endl;
    return 0;
}