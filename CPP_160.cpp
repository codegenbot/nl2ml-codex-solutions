int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i];
        } else if (operator_[i] == "-") {
            result -= operand[i];
        } else if (operator_[i] == "*") {
            int temp = 0;
            for (int j = i; j < operand.size(); j++) {
                temp += operand[j];
                if (j < operator_.size() - 1 && operator_[j + 1] == "/") {
                    temp /= operand[j + 1];
                } else if (j < operator_.size() - 1 && operator_[j + 1] == "**") {
                    temp = pow(temp, operand[j + 1]);
                }
            }
            result += temp;
        } else if (operator_[i] == "//") {
            int temp = operand[i];
            for (int j = i + 1; j < operand.size(); j++) {
                temp /= operand[j];
            }
            result += temp;
        } else if (operator_[i] == "**") {
            int temp = 1;
            for (int j = i; j < operand.size(); j++) {
                temp *= operand[j];
            }
            result = pow(result, temp);
        }
    }
    return result;
}