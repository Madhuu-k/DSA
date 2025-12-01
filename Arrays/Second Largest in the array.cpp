#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 4, 45, 99};
    int max = INT_MIN, secondMax = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
    }

    cout << "Max Element: " << max << endl;
    cout << "Second Max Element: " << secondMax << endl;
    return 0;
}