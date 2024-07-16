#include <string>
#include <sstream>

std::string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz";
    else if (x % 5 == 0)
        return "Buzz";
    else
        return std::to_string(x) == "0" ? "0" : std::to_string(x);
}

int main() {
    int x = 15; // any number you want to test
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}