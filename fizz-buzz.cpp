#include <string>

std::string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return (x % 5 == 0) ? "FizzBuzz" : "Fizz";
    else
        return (x % 5 == 0) ? "Buzz" : std::to_string(x);