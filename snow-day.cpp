#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;
    
    for (int i = 0; i < hours; ++i) {
        snow += rate;
        snow -= melt * snow;
    }
    
    std::cout << snow << "\n";
    
    return 0;
}