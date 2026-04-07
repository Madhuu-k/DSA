#include <iostream>
#include <stack>
using namespace std;

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

string infixToPostfix(string s) {
    string res = "";
    stack<char> st;

    for (char c : s) {
        // Operand → directly add to result
        if (isalnum(c)) res += c;

        // Opening bracket → push to stack
        else if (c == '(') st.push(c);

        // Closing bracket → pop until '('
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }

        // Operator
        else {
            while (!st.empty() && ((precedence(st.top()) > precedence(c)) ||
                   (precedence(st.top()) == precedence(c) && c != '^'))) {
                res += st.top();
                st.pop();
                   }
            st.push(c);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main() {
    string s = "A+B*C-D";
    cout << infixToPostfix(s) << endl;  // Expected output: ABC*+D-
    return 0;
}
