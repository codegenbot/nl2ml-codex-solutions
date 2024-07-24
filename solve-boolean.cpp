#include <string>
#include <iostream>

bool evaluateBooleanExpression(const std::string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool result = false;
        bool negate = false;

        if (expr[0] == '!') {
            negate = true;
            return !evaluateBooleanExpression(expr.substr(1));
        }

        if (expr.find('&') != std::string::npos) {
            result = true;
            for (char c : expr) {
                if (c == '&') {
                    continue;
                } else if (c == 't') {
                    result = result && true;
                } else if (c == 'f') {
                    result = result && false;
                } else if (c == '!') {
                    continue;
                }
            }
        } else if (expr.find('|') != std::string::npos) {
            result = false;
            for (char c : expr) {
                if (c == '|') {
                    continue;
                } else if (c == 't') {
                    result = result || true;
                } else if (c == 'f') {
                    result = result || false;
                } else if (c == '!') {
                    continue;
                }
            }
        }
        
        return negate ? !result : result;
    }
}

int main() {
    std::string expression;
    std::cin >> expression;
    std::cout << evaluateBooleanExpression(expression) << std::endl;
    return 0;
}