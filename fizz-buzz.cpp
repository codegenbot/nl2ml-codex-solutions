```c++
#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return x % 5 == 0 ? "FizzBuzz" : "Fizz";
    else if (x % 5 == 0)
        return "Buzz";
    else
        return std::to_string(x).c_str();
}

int main() {
    for(int i = 1; i <= 100; ++i) {
        std::cout << fizzBuzz(i) << std::endl;
    }
    return 0;
}