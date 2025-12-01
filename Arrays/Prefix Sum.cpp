#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> result;
    int prefixSum = arr[0];
    result.push_back(prefixSum);
    for (int i = 1; i < arr.size(); i++) {
        prefixSum += arr[i];
        result.push_back(prefixSum);
    }

    for (int i = 0; i < arr.size(); i++) cout << result[i] << " ";
    return 0;
}