#include <iostream>
#include <iomanip>

double probabilityOfHigherRoll(int n, int m) {
    double totalOutcomes = n * m;
    double higherOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                higherOutcomes++;
            }
        }
    }

    return higherOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = probabilityOfHigherRoll(n, m);
    std::cout << std::fixed << std::setprecision(9) << probability << std::endl;

    return 0;
}