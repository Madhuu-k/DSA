#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    // Push Operation -
    st.push(10);
    st.push(20);
    st.push(30);

    // Get Top of the stack
    cout << "\nStack Top: " << st.top() << endl;

    // Display the stack
    cout << "The stack is:\n";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << endl;
        temp.pop();
    }


    // Pop Operation
    st.pop();

    cout << "Top after popping: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    // Stack empty or not
    if (!st.empty()) cout << "Stack not empty" << endl;
    else cout << "Stack is empty" << endl;

    return 0;
}
