```c++
#include <iostream>
#include <string>

double calculateSnowOnGround(int hours, double initialSnow, double snowFallRate, double meltingRate) {
    double snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= (snowOnGround * meltingRate) + snowFallRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    double result = calculateSnowOnGround(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << result << std::endl;
    return 0;
}
```