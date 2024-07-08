```cpp
#include <string>
#include <sstream>

std::string fizzBuzz(int x) {
    std::ostringstream result;
    if (x % 3 == 0 && x % 5 == 0) {
        result << "FizzBuzz";
    } else if (x % 3 == 0) {
        result << "Fizz";
    } else if (x % 5 == 0) {
        result << "Buzz";
    } else {
        result << std::to_string(x);
    }
    return result.str();