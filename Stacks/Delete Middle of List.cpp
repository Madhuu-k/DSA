#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int>& st, int curr, int mid) {
    if (st.empty()) return;

    int temp = st.top();
    st.pop();

    if (curr != mid) {
        deleteMiddle(st, curr + 1, mid);
        st.push(temp);
    }
}

int main() {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int n = st.size();
    deleteMiddle(st, 0, n / 2);
    for (int i = n; i >= 0; i--) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}