#include <iostream>
int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground -= snow_on_ground * snow_melt_rate; // Melt existing snow
        snow_on_ground += snow_fall_rate; // Add newly fallen snow
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}