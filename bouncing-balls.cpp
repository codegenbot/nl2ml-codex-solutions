#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2 * startHeight) * pow(bouncinessIndex, i);
    }

    cout.precision(6); // Display the output with 6 decimal places
    cout << fixed << totalDistance << endl;

    return 0;
}