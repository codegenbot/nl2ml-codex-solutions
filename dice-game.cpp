#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = 0;
    for (int i = m + 1; i <= n; i++) {
        total += 1.0 / n - 1.0 / m;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << diceGame(n, m) << endl;
    return 0;
}