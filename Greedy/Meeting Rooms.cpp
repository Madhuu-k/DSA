#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool meetingRooms(vector<vector<int>>& arr) {
    sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1][1] > arr[i][0]) return false;
    }
    return true;
}

int main() {
    vector<vector<int>> arr = {{1, 4}, {10, 15}, {7, 10}};
    cout << meetingRooms(arr) << endl;
    return 0;
}