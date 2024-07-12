#include <iostream>
#include <stack>

int precedence(char op) {
    if (op == '|') return 1;
    if (op == '&') return 2;
    return 0;
}

bool evaluateBooleanExpression(const std::string& expression) {
    std::stack<bool> operands;
    std::stack<char> operators;

    for (char c : expression) {
        if (c == 'T') {
            operands.push(true);
            operators.push(c);
        } else if (c == 'F') {
            operands.push(false);
            operators.push(c);
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

int main() {
    std::string expression;
    std::cout << "Enter a boolean expression: ";
    std::getline(std::cin, expression);
    
    bool result = evaluateBooleanExpression(expression);
    std::cout << "Result: " << (result ? "T" : "F") << std::endl;

    return 0;
}