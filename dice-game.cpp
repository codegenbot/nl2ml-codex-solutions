#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m - 1); i++) {
        total += 1.0 / m;
    }
    total -= (n - m + 1) * 1.0 / n;
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << diceGame(n, m) << endl;
    return 0;
}