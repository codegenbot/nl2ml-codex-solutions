#include <cmath>

float triangle_area(float a, float b, float c){
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return std::round((std::sqrt(s*(s-a)*(s-b)*(s-c))) * 100.0) / 100.0;
    } else
        return -1.0f;
}

int main() {
    assert (std::abs(triangle_area(2, 2, 10) + 1) < 0.01);
}