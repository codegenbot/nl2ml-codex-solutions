#include <iostream>
#include <string>

bool is_happy(int n);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;  
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}