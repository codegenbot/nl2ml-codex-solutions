bool solve_boolean(const string& expression) {
    if (expression == "t") {
        return true;
    }
    if (expression == "f") {
        return false;
    }
    char op = expression[1];
    if (op == '&') {
        return expression[0] == 't' && expression[2] == 't';
    } else if (op == '|') {
        return expression[0] == 't' || expression[2] == 't';
    }
    return false;
}