#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return false;
            else st.pop();
        } else if (s[i] == '|') {
            while (!st.empty()) st.pop();
        } else {
            st.push(s[i]);
        }
    }
    return !st.empty();
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if (result) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}