#include <iostream>

double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        if (totalSnow > 0) {
            totalSnow -= meltPerHour;
        }
    }
    return totalSnow;
}

int main() {
    int hours = 5; 
    float initialSnow = 1.0f;
    float snowFallRate = 2.0f;
    float meltPerHour = 0.3f;

    double result = snowDay(hours, initialSnow, snowFallRate, meltPerHour);
    std::cout << "Total snow after " << hours << " hours: " << result << std::endl;
    return 0;
}