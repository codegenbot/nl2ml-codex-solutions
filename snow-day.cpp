#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 1; i <= hours; ++i) {
        snow_on_ground += snow_fall_rate - snow_on_ground * snow_melt_rate;
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}