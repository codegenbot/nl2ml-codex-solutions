#include <cmath>
#include <iostream>

double probability(int n, int m) {
    double total = 0;
    for(int i = 1; i < std::min(n, m); i++) {
        total += (i/(double)n) * (m-i)/(double)m;
    }
    return total;
}

int main() {
    std::cout << "The probability that Peter rolls strictly higher than Colin is: "
              << probability(34, 24) << '\n';
    return 0;
}