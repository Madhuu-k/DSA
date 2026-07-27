#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {10, 4, 5, 9, 5, 6};
    int target = 13;
    int left = 0, sum = 0;

    for (int right = 0; right < vec.size(); right++) {
        sum += vec[right];

        while (sum > target && left <= right) {
            sum -= vec[left];
            left++;
        }

        if (sum == target) {
            cout << left << "-->" << right << endl;
        }
    }

    return 0;
}
