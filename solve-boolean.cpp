string solveBoolean(string expression) {
    stack<char> s;
    string result = "";
    
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else {
            s.push(expression[i]);
        }
    }
    
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    
    return result;
}