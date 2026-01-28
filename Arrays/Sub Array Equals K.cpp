#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subArrayEquals(vector<int> &arr,int k) {
    unordered_map<int, int> freq;
    freq[0] = 1;
    int sum = 0, count = 0;
    for (int x : arr) {
        sum += x;
        if (freq.count(sum - k)) count += freq[sum - k];
        freq[sum]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1, 1, 1};
    int k = 2;
    cout << "Subarray equals: " << subArrayEquals(arr, k) << endl;
    return 0;
}