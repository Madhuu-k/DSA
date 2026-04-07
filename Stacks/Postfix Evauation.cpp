#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string s){
    stack<int> st;

    for(char c : s){
        if(isdigit(c)){
            st.push(c - '0');
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if(c == '+') st.push(a + b);
            else if(c == '-') st.push(a - b);
            else if(c == '*') st.push(a * b);
            else if(c == '/') st.push(a / b);
        }
    }

    return st.top();
}

int main(){
    string s = "23*5+";
    cout << evaluatePostfix(s);
}