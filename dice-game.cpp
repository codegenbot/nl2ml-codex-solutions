#include <iostream>
double probability(int n, int m);

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << std::setf(std::ios_base::fixed) << std::setprecision(2) << result << std::endl;
}

double probability(int n, int m) {
    if (n < m)
        return 0.0;
    else
        return (m + 1.0) / n;
}