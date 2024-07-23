#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '|') {
            std::string left = expression.substr(0, i);
            std::string right = expression.substr(i + 1);
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            std::string left = expression.substr(0, i);
            std::string right = expression.substr(i + 1);
            return solveBoolean(left) && solveBoolean(right);
        }
    }

    if (expression.size() > 0) {
        if (std::tolower(expression[0]) == 't')
            return true;
        else
            return false;
    } else 
        return false; 

}

int main() {
    std::string expression;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
    return 0;
}