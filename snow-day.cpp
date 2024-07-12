#include <iostream>
#include <iomanip>

int main() {
    int hours;
    long double snow;
    double rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        long double snowmelt = melt * snow;
        snow = snow + static_cast<long double>(rate) - static_cast<long double>(snowmelt);
    }

    std::cout << std::fixed << std::setprecision(15) << snow << std::endl;

    return 0;
}