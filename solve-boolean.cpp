#include <string>
using namespace std;

bool evaluateBooleanExpression(const string& expr) {
    if (expr == "t") {
        return true;
    } else {
        return false;
    }
}