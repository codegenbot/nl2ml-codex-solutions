#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double probability = 0;
    for (int i = m + 1; i <= n; ++i) {
        probability += (1.0 / n) * (1.0 / m);
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << calculateProbability(n, m) << endl;
    return 0;
}