#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();

    insertAtBottom(st, x);
    st.push(top);
}

void reverseStack(stack<int>& st) {
    if (st.empty()) return;

    int top = st.top();
    st.pop();

    reverseStack(st);
    insertAtBottom(st, top);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}