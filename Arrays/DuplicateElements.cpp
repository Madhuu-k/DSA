#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 3, 4, 2, 4, 6, 7, 6};
    int freq[100] = {0};
    for(int i = 0; i < arr.size(); i++) freq[arr[i]]++;
    cout << "Elements with frequency more than 1: \n";
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 1) cout << i << " ";
    }
    return 0;
}