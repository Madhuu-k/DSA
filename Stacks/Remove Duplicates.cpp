#include <algorithm>
#include<iostream>
#include<stack>
using namespace std;

string removeDuplicates(string& str) {
    stack<char> st;

    for (char c : str) {
        if (!st.empty() && st.top() == c) st.pop();
        else st.push(c);
    }

    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string str = "abbaca";
    string res = removeDuplicates(str);
    cout << "Result: " << res << endl;
    return 0;
}