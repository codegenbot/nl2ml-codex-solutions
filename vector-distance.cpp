#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<double> vec1(n);
    std::vector<double> vec2(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    
    double result = std::sqrt(sum);
    
    std::cout << result << std::endl;
    
    return 0;
}