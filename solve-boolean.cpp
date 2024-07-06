#include <iostream>
#include <string>
using namespace std;

stack<char> operators; // declare 'operators' at global level

bool evaluate(const string &expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            operators.push('|');
        } else if (expression[i] == '&') {
            operators.push('&');
        } else if (expression[i] == '^') {
            operators.push('^');
        } else if (expression[i] == '~') {
            result = !result;
        } else if (operators.empty()) {
            result = true;
        } else {
            char operator = operators.top();
            switch (operator) {
                case '|':
                    result |= expression[i];
                    break;
                case '&':
                    result &= expression[i];
                    break;
                case '^':
                    result ^= expression[i];
                    break;
            }
        }
    }
    return result && expression != "false";
}