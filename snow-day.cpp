```c++
#include <iostream>

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    
    for(int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= snow * meltingRate;
    }
    
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float result = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << result << std::endl;
    
    return 0;
}
```