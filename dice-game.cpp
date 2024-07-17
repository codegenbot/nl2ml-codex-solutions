#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double higher = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            higher++;
        }
    }

    return higher / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}