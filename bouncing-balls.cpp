#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (2 * startHeight * (1 - pow(bouncinessIndex, i)));
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}