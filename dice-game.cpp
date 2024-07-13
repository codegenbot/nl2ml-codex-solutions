#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    cout << "The probability that Peter rolls strictly higher than Colin is: ";
    for(int i = 1; i < n; i++) {
        double prob = (n - i) / (double)(n*m); 
        cout << std::fixed << setprecision(10) << (prob == 0. ? "0" : to_string(prob)) << " "; 
    }
    cout << endl;

    return 0;
}