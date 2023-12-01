#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == std::floor(lst[i]) && static_cast<int>(lst[i]) % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

std::vector<float> lst = {1.5, 2.5, 3.5, 4.5, 5.5};
double odd_sum = double_the_difference(lst);

std::cout << "Odd Sum: " << odd_sum << std::endl;