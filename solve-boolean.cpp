#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '|') {
            while(!st.empty() && st.top() != '&') {
                st.pop();
            }
            if(st.empty()) {
                return true;
            }
        } else if(s[i] == '&') {
            st.push('&');
        } else if(s[i] == 't' || s[i] == 'f') {
            st.push((s[i] == 't') ? 1 : 0);
        }
    }
    
    while(!st.empty()) {
        st.pop();
    }
    
    return false;
}