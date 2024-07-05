#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int do_algebra(const std::vector<std::string>& operato, const std::vector<int>& operand) {
    int result = operand[0];
    for (size_t i = 0; i < operato.size(); ++i) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "//") {
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = std::pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    std::cout << (do_algebra({"//", "*"}, {7, 3, 4}) == 8) << std::endl;
    return 0;
}