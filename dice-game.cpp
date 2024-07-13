#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    return (double)(m - 1) / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}