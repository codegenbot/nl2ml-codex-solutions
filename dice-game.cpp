#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total_outcomes = n * m; // total number of possible outcomes
    double favorable_outcomes = 0; // number of outcomes where Peter rolls strictly higher than Colin

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }

    return favorable_outcomes / total_outcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << probability(n, m) << endl;
    return 0;
}