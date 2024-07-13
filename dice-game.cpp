#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double numerator = (n - 1) * m * (m + n - 2);
    double denominator = n*m*(n+m-1);

    double probability = (double)numerator / denominator;
    cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << endl;

    return 0;
}