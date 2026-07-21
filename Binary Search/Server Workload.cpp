#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool isWorkloadPossible(vector<int>& works, int total_servers, int limit) {
    int count = 1;
    int workload = 0;

    for (int work : works) {
        if (work > limit) return false;
        if (work + workload <= limit) workload += work;
        else {
            count++;
            workload = work;
        }
    }

    return count <= total_servers;
}

int maxWorkload(vector<int>& works, int tota_servers) {
    int low = *max_element(works.begin(), works.end());
    int high = accumulate(works.begin(), works.end(), 0);
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isWorkloadPossible(works, tota_servers, mid)) {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }

    return ans;
}

int main() {
    vector<int> works = {10, 20, 30, 40};
    int total_servers = 3;
    cout << maxWorkload(works, total_servers) << endl;
    return 0;
}