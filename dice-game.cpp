#include <iostream>
#include <ios>

double probability(int n, int m) {
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }
    
    std::cout << std::setprecision(8);
    
    return favorable_outcomes / total_outcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double result = probability(n, m);
    std::cout << result << std::endl;
    
    return 0;
}