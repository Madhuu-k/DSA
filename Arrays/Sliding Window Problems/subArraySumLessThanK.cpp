#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long subArraySum(vector<int>& arr, long long k) {
    long long sum = 0, ans = 0;
    int left = 0;
    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        while (left <= right && sum >= k) {
            sum -= arr[left++];
        }
        ans += (right - left + 1);
    }
    return ans;
}

int main() {
    vector<int> arr = { 1,11,2,3,15 };
    int k = 10;
    long long ans = subArraySum(arr, k);
    cout << ans << endl;
    return 0;
}