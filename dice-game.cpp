#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i < j) {
                count++;
            }
        }
    }

    double same = 0; // Count of cases when Peter and Colin get the same result
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if(i == j) {
                same++;
            }
        }
    }

    return same / total;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;

}