#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) sum += arr[i];
    float avg = float(sum) / arr.size();
    cout << "Sum is: " << sum << "\nAverage is: " << avg;
    return 0;
}