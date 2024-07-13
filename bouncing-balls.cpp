#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -i) * (startHeight + (heightAfterFirstBounce - startHeight) * bouncinessIndex);
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}