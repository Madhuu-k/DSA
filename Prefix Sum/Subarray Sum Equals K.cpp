#include<iostream>
#include<unordered_map>
using namespace std;

int subarraySum(int arr[], int n, int k) {
    unordered_map<int, int> map;
    map[0] = 1;
    int prefixSum = 0, count = 0;
    for (const int num : arr) {
        prefixSum += num;
        if (map.find(prefixSum - k) != map.end()) count += map[prefixSum - k];
        map[prefixSum]++;
    }
    return count;
}

int main() {
    int arr[] = {5,3,8,6,2};
    int k = 8;
    cout << subarraySum(arr, 5, k) << endl;
    return 0;
}