#include <string>

std::string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz";
    else if (x % 5 == 0)
        return "Buzz";
    else
        return std::to_string(x);
}

int main() {
    int x = 15; 
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}