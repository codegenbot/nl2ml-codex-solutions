string solveBoolean(string booleanExpression) {
    stack<char> expression;
    
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '|') {
            while (!expression.empty() && expression.top() != '&') {
                expression.pop();
            }
            if (!expression.empty()) {
                expression.pop();
            }
        } else if (booleanExpression[i] == '&') {
            expression.push('&');
        } else {
            expression.push(booleanExpression[i]);
        }
    }
    
    string result;
    while (!expression.empty()) {
        result = ((expression.top() == 'T') ? "True" : "False") + (result.empty() ? "" : " ");
        expression.pop();
    }
    
    return result;
}