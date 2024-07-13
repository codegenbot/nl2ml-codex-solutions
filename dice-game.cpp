#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;
    ostringstream oss; 
    oss << fixed;
    for(int i = 1; i < m; i++) {
        double prob = (n-m+1) / (double)n; // Calculate the probability that Peter rolls strictly higher than Colin
        sum += prob;
        oss << setprecision(10) << prob << " "; 
    }
    cout << oss.str() << endl;

    return 0;
}