int do_algebra(vector<string> operator, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator.size(); i++) {
        if (operator[i] == "+") {
            result += operand[i + 1];
        } else if (operator[i] == "-") {
            result -= operand[i + 1];
        } else if (operator[i] == "*") {
            result *= operand[i + 1];
        } else if (operator[i] == "//") {
            result /= operand[i + 1];
        } else if (operator[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}