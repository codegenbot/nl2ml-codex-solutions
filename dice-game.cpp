#include <iostream>
using namespace std;

#include <iomanip>

double diceGame(int n, int m) {
    double total = (double)n * m;
    return (n - m) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m);
    return 0;