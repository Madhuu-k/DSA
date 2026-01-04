#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 5, 6};
    int sum = 0;
    for (int i = 0; i < arr.size() - 1; i++) sum += arr[i];
    int total = (arr.size()) * (arr.size() + 1) / 2;
    int missingNum = total - sum;
    cout << "Missing Number: " << missingNum << endl;
    return 0;
}