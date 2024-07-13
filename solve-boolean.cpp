#include <string>

std::string solveBoolean(std::string s) {
    std::stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push('&');
        } else if (s[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else {
            st.push(s[i]);
        }
    }
    std::string res = "";
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return (res == "T") ? "True" : ((res == "F") ? "False" : "");
}