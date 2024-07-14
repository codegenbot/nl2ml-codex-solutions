#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            else st.pop();
        } 
        else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) return true;
            else st.pop();
        } 
        else {
            st.push(s[i]);
        }
    }
    return !st.empty();