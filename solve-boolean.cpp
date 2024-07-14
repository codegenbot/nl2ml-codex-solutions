```
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> opStack;
    stack<string> valStack;
    stack<string> v2Stack; // declare here
    string v2;              // declare here

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|')
                opStack.pop(), valStack.pop();
            opStack.push('&');
        } else if (expression[i] == '|') {
            opStack.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            string temp = "";
            while (i > 0 && (expression[i-1] == '&' || expression[i-1] == '|')) {
                i--;
            }
            for (; i > 0 && (expression[i-1] != '&' && expression[i-1] != '|'); i--)
                temp = string(1, expression[--i]);
            valStack.push(temp);
        }
    }

    while (!opStack.empty()) {
        string v1 = valStack.top(), v2; // use v2Stack here
        valStack.pop();
        if (opStack.top() == '&') {
            opStack.pop();
            valStack.push((v1 == "T" && v2Stack.top() == "T") ? "T" : "F");
            v2Stack.pop(); // pop after use
        } else {
            opStack.pop();
            valStack.push((v1 == "T" || v2Stack.top() == "T") ? "T" : "F");
            v2Stack.pop(); // pop after use
        }
    }

    return valStack.top() == "T";
}