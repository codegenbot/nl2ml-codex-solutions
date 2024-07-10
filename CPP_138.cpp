#include <iostream>

int main() {
    bool is_equal_to_sum_even(int n) {
        for (int i = 2; i <= n; i += 2) {
            int sum = 0;
            for (int j = 2; j <= n; j += 2) {
                if (sum + j > n)
                    break;
                sum += j;
                if (sum == n)
                    return true;
            }
        }
        return false;
    }
    int choice;
    std::cout << "Enter a number: ";
    std::cin >> choice;
    if (is_equal_to_sum_even(choice))
        std::cout << "The given number is equal to the sum of even numbers up to that number." << std::endl;
    else
        std::cout << "The given number is not equal to the sum of even numbers up to that number." << std::endl;
    return 0;
}