#include <iostream>
#include <vector>

float get_positive(float num) {
    return (num > 0.0f) ? num : -num;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != 1 || b.size() != 1) {
        return false;
    }
    return a[0] == b[0];
}

int main() {
    float num1, num2;
    std::cout << "Enter the first number: ";
    if (!(std::cin >> num1)) {
        std::cout << "Invalid input for the first number." << std::endl;
        return 1;
    }
    std::cout << "Enter the second number: ";
    if (!(std::cin >> num2)) {
        std::cout << "Invalid input for the second number." << std::endl;
        return 1;
    }

    bool are_same = issame({num1}, {num2});
    
    if (are_same) {
        float result = get_positive(num1);
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }
    
    return 0;
}