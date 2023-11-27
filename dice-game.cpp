#include <iostream>
#include <iomanip>

using namespace std;

double probability(int n, int m) {
    int total_outcomes = n * m;
    int peter_wins = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peter_wins++;
            }
        }
    }

    return static_cast<double>(peter_wins) / total_outcomes;
}

int main() {
    int n, m;
    cin >> n >> m;

    double result = probability(n, m);
    cout << setprecision(8) << result << endl;

    return 0;
}