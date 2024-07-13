#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<bool> valStack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                valStack.pop();
            }
            if (!opStack.empty()) opStack.push('&');
        } else if (expression[i] == '|') {
            opStack.push('|');
            valStack.push(false);
        } else if (expression[i] == 'T' || expression[i] == 't') {
            valStack.push(true);
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            valStack.push(false);
        }
    }

    return valStack.top();
}