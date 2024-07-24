```cpp
#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionOfSnowMeltingPerHour);
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cout << "Enter hours: ";
    std::cin >> hours;

    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    
    std::cout << "Enter initial snow: " << std::fixed << std::setprecision(6);
    std::cin >> initialSnow;
    
    std::cout << "Enter rate of snow fall: " << std::fixed << std::setprecision(6);
    std::cin >> rateOfSnowFall;

    std::cout << "Enter proportion of snow melting per hour: " << std::fixed << std::setprecision(6);
    std::cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    std::cout << fixed << setprecision(10) << result << std::endl;
    return 0;
}