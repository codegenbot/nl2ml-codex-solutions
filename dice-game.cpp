#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double petersWin = 0.0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (j > m) break;
            petersWin += 1.0 / total;
        }
    }

    return petersWin;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;