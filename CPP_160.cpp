#include<iostream>
#include<vector>
#include<string>
#include<cmath> // Include cmath for pow function
using namespace std;

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operato.size(); ++i) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "//") {
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    vector<string> operato{"+", "*", "-"};
    vector<int> operand{2, 3, 4, 5};
    cout << "Result: " << do_algebra(operato, operand) << endl;
    return 0;
}