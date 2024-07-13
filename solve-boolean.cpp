#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
        } else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T';
}

int main() {
    string expression;
    cout << "Enter Boolean expression: ";
    cin >> expression;
    if (solveBoolean(expression)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}