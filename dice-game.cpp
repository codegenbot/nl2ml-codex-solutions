#include <iostream>
#include <cmath>

double diceGame(int n, int m) {
    double win = 0.0;
    
    for(int i = 1; i <= m && i < n; i++) { 
        win += (n - i) * (1.0 / (n) * (m - i + 1));
    }
    
    return win;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    if (!(std::cin >> n)) {
        std::cerr << "Invalid input for Peter's die.\n";
        return 1;
    }
    std::cout << "Enter the number of sides for Colin's die: ";
    if (!(std::cin >> m)) {
        std::cerr << "Invalid input for Colin's die.\n";
        return 1;
    }
    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}