#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    std::string result;
    if (x % 3 == 0 && x % 5 == 0)
        result = "FizzBuzz";
    else if (x % 3 == 0)
        result = (x % 5 == 0) ? "FizzBuzz" : "Fizz";
    else if (x % 5 == 0)
        result = "Buzz";
    else
        result = std::to_string(x);
    return result;
}

int main() {
    for(int i = 1; i <= 212647; i++) {
        std::cout << fizzBuzz(i) << std::endl;
    }
}