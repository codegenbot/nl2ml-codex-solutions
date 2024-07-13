#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = n + 1; i <= m * 2; i++) {
        sum += 1.0 / min(n, m);
    }
    return sum - (n > m ? 1 : 0);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}