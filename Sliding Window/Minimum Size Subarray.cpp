#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0;
    int minIndxs = INT_MAX, sum = 0;

    for(int right = 0; right < nums.size(); right++){
        sum += nums[right];
        while(sum >= target){
            minIndxs = min(minIndxs, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }
    return minIndxs == INT_MAX ? 0 : minIndxs;
}

int main() {
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout << minSubArrayLen(target, nums) << endl;
    return 0;
}