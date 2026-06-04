#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 4, 5};
    int n = 5;

    long long expected = (long long)n * (n + 1) / 2;
    long long actual = 0;
    for (long long x : nums) actual += x;

    cout << "Missing Numbers: " << expected - actual << endl;
    return 0;
}
