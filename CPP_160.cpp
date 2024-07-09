#include <iostream>
#include <vector>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            result *= operand[i + 1];
        } else if (operator_[i] == "//") {
            result = result / static_cast<int>(operand[i + 1]);
        } else if (operator_[i] == "**") {
            result = pow(result, static_cast<double>(operand[i + 1]));
        }
    }
    return result;
}

int main() {
    std::cout << do_algebra({"//", "*"}, {7, 3, 4}) << std::endl;
    return 0;
}