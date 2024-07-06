
#include <string>
using namespace std;

string squareDigits(int number) {
    string result = "";
    while (number > 0) {
        int digit = number % 10;
        result = to_string(digit * digit) + result;
        number /= 10;
    }
    return result;
}