#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str) {
    stack<char> st;

    for (char c : str) {
        if (c == '[' || c == '{' || c == '(') st.push(c);
        else {
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) return false;
        }
    }
    return st.empty();
}

int main() {
    string str;
    cout << "Enter the string: ";  cin >> str;
    if (isValid(str)) cout << "It is a Valid string: " << str << endl;
    else cout << "Invalid string" << endl;
    return 0;
}