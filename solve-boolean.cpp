bool evaluateBooleanExpression(const string& expression) {
    std::stack<char> operators;
    std::stack<bool> operands;

    for (char c : expression) {
        if (c == 'T') {
            operands.push(true);
        } else if (c == 'F') {
            operands.push(false);
        } else if (c == '&' || c == '|') {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                char op = operators.top();
                operators.pop();
                bool operand2 = operands.top();
                operands.pop();
                bool operand1 = operands.top();
                operands.pop();
                if (op == '&') {
                    operands.push(operand1 && operand2);
                } else if (op == '|') {
                    operands.push(operand1 || operand2);
                }
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        bool operand2 = operands.top();
        operands.pop();
        bool operand1 = operands.top();
        operands.pop();
        if (op == '&') {
            operands.push(operand1 && operand2);
        } else if (op == '|') {
            operands.push(operand1 || operand2);
        }
    }

    return operands.top();
}