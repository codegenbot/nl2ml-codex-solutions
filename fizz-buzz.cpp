#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz";
    else if (x % 5 == 0)
        return "Buzz";
    else
        return std::to_string(x);
}

int main() {
    long long num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << fizzBuzz(num) << std::endl;
    return 0;
}