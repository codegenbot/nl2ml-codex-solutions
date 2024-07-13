#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= min(m, i - 1); j++) {
            if(i > j){
                p += 1.0 / total;
            }
        }
    }

    return p;
}

int main() {
    int n = 6; 
    int m = 6; 
    double result = probability(n, m);
    cout << "Probability: " << result << endl;
    return 0;
}