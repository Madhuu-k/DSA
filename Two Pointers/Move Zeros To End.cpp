#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void moveZeros(vector<int>& nums) {
    int left = 0;
    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0){
            swap(nums[left], nums[right]);
            left++;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeros(nums);
    for (const auto num : nums) cout << num << " ";
    return 0;
}