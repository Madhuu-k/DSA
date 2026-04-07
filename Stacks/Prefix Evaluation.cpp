#include <bits/stdc++.h>
using namespace std;

int evaluatePrefix(string s){
    stack<int> st;

    for(int i = s.length() - 1; i >= 0; i--){
        char c = s[i];

        if(isdigit(c)){
            st.push(c - '0');
        } else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            if(c == '+') st.push(a + b);
            else if(c == '-') st.push(a - b);
            else if(c == '*') st.push(a * b);
            else if(c == '/') st.push(a / b);
        }
    }

    return st.top();
}

int main(){
    string s = "+9*26";
    cout << evaluatePrefix(s);
}