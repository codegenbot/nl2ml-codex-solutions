string solveBoolean(string booleanExpression) {
    stack<char> expression;
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!expression.empty() && expression.top() == '&') {
                expression.pop();
            }
        } else if (booleanExpression[i] == '|') {
            while (!expression.empty() && expression.top() == '|') {
                expression.pop();
            }
        } else {
            expression.push(booleanExpression[i]);
        }
    }
    
    string result = "";
    while (!expression.empty()) {
        result += expression.top();
        expression.pop();
    }
    
    if (result.length() > 1) {
        return "False";
    } else {
        return result[0] == 'T' ? "True" : "False";
    }
}