```cpp
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < n; i++) {
        p += (double)1 / total;
    } 
    return p;
}

int main() {
    int n, m;
    
    cout << "Enter value of n: ";
    cin >> n;

    if(n < 2) {
        cout << "n must be at least 2. Please enter again." << endl;
        cout << "Enter value of n: ";
        cin >> n;
    }

    cout << "\nEnter value of m: ";
    cin >> m;

    if(m < 2) {
        cout << "m must be at least 2. Please enter again." << endl;
        cout << "Enter value of m: ";
        cin >> m;
    }

    double result = diceGame(n, m);
    cout << "Probability that Peter rolls strictly higher than Colin is: " << result << endl; 

    return 0;
}