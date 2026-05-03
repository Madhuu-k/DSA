#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int overlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
        return a[1] < b[1];
    });
    int count = 0;
    int lastEnd = intervals[0][1];

    for (int i = 1; i < intervals.size(); i++) {
        if (lastEnd > intervals[i][0]) count++;
        else lastEnd = intervals[i][1];
    }

    return count;
}

int main() {
    vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    cout << overlapIntervals(intervals) << endl;
    return 0;
}