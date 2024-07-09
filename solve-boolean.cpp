#include <stack>
#include <string>

std::string solveBoolean(std::string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return "False";
            }
            else {
                st.pop();
            }
        } 
        else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return "True";
            }
            else {
                st.push(s[i]);
            }
        } 
        else {
            st.push(s[i]);
        }
    }
    if (st.empty()) {
        return "False";
    }
    else {
        return st.top() == 'T' ? "True" : "False";
    }
}