#include<iostream>
#include<vector>
using namespace std

bool canPick(vector<int>& skill, int chambers, int curr_gap) {
    int count = 1;
    int last_pos = skill[0];

    for (int i = 1; i < skill.size(); i++) {
        if (skill[i] - last_pos >= curr_gap) {
            count++;
            last_pos = skill[i];
        }

        if (count >= chambers) return true;
    }
    return false;
}

int maxMinDistance(vector<int>& skill, int chambers) {
    int low = 0, high = skill.back() - skill.front();
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canPick(skill, chambers, mid)) {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

int main() {
    vector<int> skill = {1, 2, 4, 8, 9};
    int chambers = 3;
    cout << maxMinDistance(skill, chambers) << endl;
    return 0;
}