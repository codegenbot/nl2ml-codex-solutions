#include <iostream>
#include <string>

float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        onGround += (rate / 60);
        if (onGround > 1024) {
            float excess = onGround - 1024;
            onGround = 1024;
            onGround -= excess;
        } else {
            onGround -= melt * onGround;
        }
    }
    return onGround;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    std::string s = std::to_string(snowDay(hours, onGround, rate, melt));
    cout << s << endl;
    return 0;
}