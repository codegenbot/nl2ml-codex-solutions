# Code:
#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        snow += rate;
        snow *= (1 - melt);
    }

    std::cout << snow << std::endl;

    return 0;
}