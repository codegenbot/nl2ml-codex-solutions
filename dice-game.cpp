#include <vector>
using namespace std;

double game(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for(int i = 1; i <= min(n, m); i++) {
        p += ((n - i) / n) * ((m - i) / m);
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << game(n, m) << endl;
    return 0;
}