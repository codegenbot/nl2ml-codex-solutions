#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;  

    double bouncinessIndex = (firstBounce / startHeight);
    startHeight = firstBounce;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += startHeight;
        startHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(10);
    cout << static_cast<int>(totalDistance + 0.00001) << endl;

    return 0;
}