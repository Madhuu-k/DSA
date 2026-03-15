#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    double maxAvg = INT_MIN;
    double sum = 0;
    int left = 0;
    for(int right = 0; right < nums.size(); right++){
        sum += nums[right];
        while(right - left + 1 == k){
            double avg = sum / k;
            maxAvg = max(maxAvg, avg);
            sum -= nums[left];
            left++;
        }
    }
    return maxAvg;
}

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 3;
    cout << findMaxAverage(nums, k);
    return 0;
}