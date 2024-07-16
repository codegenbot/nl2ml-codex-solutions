#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -i) * (startHeight + (firstBounceHeight - startHeight) * bouncinessIndex);
    }

    cout.precision(4);
    cout << fixed << totalDistance << endl;

    return 0;
}