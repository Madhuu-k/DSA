#include <iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &nums) {
    int n = nums.size();
    vector<int> arr(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() >= nums[i]) st.pop();
        if (!st.empty()) arr[i] = st.top();
        st.push(nums[i]);
    }

    return arr;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    vector<int> arr = nextSmallerElement(nums);
    for (const int x : arr) cout << x << " ";
    return 0;
}