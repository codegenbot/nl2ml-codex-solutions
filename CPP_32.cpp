```cpp
#include <iostream>
#include <vector>

double poly(const std::vector<double>& coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(const std::vector<double>& coeffs) {
    double x = 1.0;
    while (true) {
        double y = poly(coeffs, x);
        if (std::abs(y) < 1e-6) {
            return x;
        }
        x -= y / poly({coeffs[1], -coeffs[0]}, x);
    }
}

int main() {
    std::vector<double> coeffs;
    int n; 
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        double coeff;
        std::cin >> coeff;
        coeffs.push_back(coeff);
    }

    double x; 
    std::cin >> x;
    
    // Call poly function with input values
    double sum = poly(coeffs, x);
    std::cout << "The polynomial evaluation at x = " << x << " is: " << sum << std::endl;

    // Calculate the root using find_zero function
    double solution = find_zero(coeffs);

    return 0;
}