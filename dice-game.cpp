#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    return (n - 1) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}