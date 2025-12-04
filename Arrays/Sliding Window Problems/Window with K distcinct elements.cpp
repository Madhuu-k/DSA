#include<iostream>
#include<vector>
#include <unordered_map>
#include<algorithm>
using namespace std;

int totalElements(vector<int>& arr) {
    unordered_map<int, int> mp;
    int left = 0, best = 0;

    for (int right = 0; right < arr.size(); right++) {
        mp[arr[right]]++;

        while (mp.size() > 2) {
            mp[arr[left]]--;
            if (mp[arr[left]] == 0) mp.erase(arr[left]);
            left++;
        }

        best = max(best, right - left + 1);
    }
    return best;
}

int main() {
    vector<int> arr = {0,1,2,2};
    int result = totalElements(arr);
    cout << "Total elements: " << result << endl;
    return 0;
}