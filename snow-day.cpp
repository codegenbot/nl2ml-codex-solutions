```c++
#include <algorithm>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        totalSnow -= std::min(totalSnow, rate * melt);
    }
    return totalSnow;
};