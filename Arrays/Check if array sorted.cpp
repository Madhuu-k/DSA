#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 4, 7, 9};
    bool isSorted = true;
    int left = 0, right = 1;
    while (right < arr.size()) {
        if (arr[left] > arr[right]) {
            isSorted = false;
        }
        left++; right++;
    }
    cout << (isSorted ? "True" : "False");
}