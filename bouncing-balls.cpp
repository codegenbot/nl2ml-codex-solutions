#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.5 * (startHeight + firstBounceHeight) * bouncinessIndex;

    for(int i = 1; i < numBounces; i++) {
        totalDistance += pow(2, -i);
        totalDistance *= bouncinessIndex;
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}