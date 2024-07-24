#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n && i < m; i++) {
        sum += 1.0 / m;
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}