#include <iostream>
using namespace std;

bool right_angle_triangle(float a, float b, float c) {
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        return true;
    else
        return false;
}

int main() {
    assert(right_angle_triangle(2, 2, 10) == false);
    return 0;
}