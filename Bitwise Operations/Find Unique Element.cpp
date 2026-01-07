#include<iostream>
#include<vector>
using namespace std;

int Uniqueelement(vector<int>& arr) {
    int result  = 0;
    for (int i = 0; i < arr.size(); i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 2, 4};
    cout << Uniqueelement(arr) << endl;
    return 0;
}