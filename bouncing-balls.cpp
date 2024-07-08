#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double height = firstBounceHeight * pow(bouncinessIndex, i);
        totalDistance += 2 * (startHeight + height); 
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}