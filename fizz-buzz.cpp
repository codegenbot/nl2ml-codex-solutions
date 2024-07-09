#include <iostream>

string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0) return "FizzBuzz";
    else if (x % 3 == 0) return "Fizz";
    else if (x % 5 == 0) return "Buzz";
    else return to_string(x);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fizzBuzz(n) << std::endl;
    return 0;
}