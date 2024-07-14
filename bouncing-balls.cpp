#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;

    for(int i=1; i<=numBounces; ++i) {
        totalDistance += (startingHeight * (1 - pow(0.5, i))) / (1 - pow(bouncinessIndex, i));
    }

    cout.precision(4);
    cout << fixed << totalDistance << endl;

    return 0;
}