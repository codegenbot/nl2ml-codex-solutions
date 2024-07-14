```cpp
#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    return (x % 15 == 0 ? "FizzBuzz" : (x % 3 == 0 ? "Fizz" : (x % 5 == 0 ? "Buzz" : std::to_string(x))));
}

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
}