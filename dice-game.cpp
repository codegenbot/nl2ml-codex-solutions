#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter value of n: ";
    std::cin >> n;
    std::cout << "Enter value of m: ";
    std::cin >> m;

    double result = diceGame(n, m);
    std::cout << "Probability that Peter rolls strictly higher than Colin is: " << result << std::endl; 

    return 0;
}

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < n; i++) {
        p += (double)(n - i) / total;
    } 
    return p;