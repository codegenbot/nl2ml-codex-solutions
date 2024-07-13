#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double p = 1.0;
    for (int i = 1; i <= m; i++) {
        p -= 1.0 / n;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;