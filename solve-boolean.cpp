#include <stack>
#include <string>

bool solveBoolean(string expression) {
    stack<char> s;
    
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            while (!s.empty() && (s.top() == '|' || s.top() == '&')) {
                s.pop();
            }
        } else if (expression[i] == '&') {
            while (!s.empty() && (s.top() == '&' || s.top() == '|')) {
                s.pop();
            }
        } else {
            s.push(expression[i]);
        }
    }
    
    return s.top() == 'T';
}