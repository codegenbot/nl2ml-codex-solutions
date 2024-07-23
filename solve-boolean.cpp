#include <iostream>

bool evaluateBooleanExpression(const string& expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool left = evaluateBooleanExpression(expression.substr(0, 1));
        bool right = evaluateBooleanExpression(expression.substr(2));
        if (expression[1] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << (evaluateBooleanExpression(expression.substr(0)) ? "True" : "False") << endl;
    return 0;
}