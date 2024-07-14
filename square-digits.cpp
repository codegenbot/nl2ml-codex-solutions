```c++
#include <string>
using std::to_string;
using std::string;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    std::cout << squareDigits(input) << std::endl;
    return 0;
}