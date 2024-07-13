#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m && i < n; i++) {
        total += (1.0 / n);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << diceGame(n, m) << endl;
    return 0;
}