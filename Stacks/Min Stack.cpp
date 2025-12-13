#include<iostream>
#include<stack>
using namespace std;

class Stack {
public:
    stack<int> st;
    stack<int> minStack;

    Stack() {}

    void push(int val) {
        st.push(val);
        if (minStack.empty() || val <= minStack.top()) minStack.push(val);
    }

    void pop() {
        if (st.top() == minStack.top()) minStack.pop();
        st.pop();
    }

    int top() { return st.top(); }

    int getMin() { return minStack.top(); }
};

int main() {
    Stack s;
    s.push(1);
    s.push(4);
    s.getMin();
    s.push(5);
    s.pop();
    s.top();
    s.getMin();
    return 0;
}