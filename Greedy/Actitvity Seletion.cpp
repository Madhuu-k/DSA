#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int activitySelection(vector<int>& start, vector<int>& end) {
    int n = start.size();
    vector<pair<int, int>> activites;
    for (int i = 0; i < n; i++) activites.push_back({start[i], end[i]});
    sort(activites.begin(), activites.end(), [](pair<int, int>& a, pair<int, int>& b)
        {return a.second < b.second;});
    int count = 1;
    int lastSecond = activites[0].second;

    for (int i = 1; i < n; i++) {
        if (activites[i].first > lastSecond) {
            count++;
            lastSecond = activites[i].second;
        }
    }

    return count;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    cout << activitySelection(start, end) << endl;
    return 0;
}