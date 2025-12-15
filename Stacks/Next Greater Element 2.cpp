#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 2*n - 1; i >= 0; i--) {
        int curr = nums[i % n];
        while (!st.empty() && st.top() <= curr) st.pop();
        if (i < n) ans[i] = st.empty() ? -1 : st.top();

        st.push(curr);
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 1};
    vector<int> res = nextGreaterElement(nums);
    cout << "[ ";
    for (const auto& i : res) cout << i << " ";
    cout << " ]";
    return 0;
}