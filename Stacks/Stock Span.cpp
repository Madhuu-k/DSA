#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> calculateSpan(int prices[], int n) {
    vector<int> span(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && prices[i] >= prices[st.top()]) st.pop();

        span[i] = st.empty() ? (i + 1) : (i - st.top());
        st.push(i);
    }
    return span;
}