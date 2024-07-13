#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_added = snow_fall_rate * (1.0f - snow_melt_rate);
        float snow_melted = snow_on_ground * snow_melt_rate;
        if (snow_melted > snow_on_ground) {
            snow_melted = snow_on_ground;
        }

        snow_on_ground = (snow_on_ground + snow_added - snow_melted);
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}