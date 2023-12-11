#include <iostream>
#include <iomanip>

double probabilityHigher(int n, int m) {
    int totalOutcomes = n * m;
    int favorableOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }

    return static_cast<double>(favorableOutcomes) / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double probability = probabilityHigher(n, m);
    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;
    return 0;
}