```cpp
float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    for(int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= (snowFallRate - meltingRate) * snow;
    }
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << finalSnow;

    return 0;
}
```