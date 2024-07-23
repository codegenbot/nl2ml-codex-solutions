#include <iostream>
#include <cmath> // For pow and sqrt
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += std::pow(2, -0.5) * (startingHeight + (startingHeight - firstBounceHeight) * std::pow(bouncinessIndex, i));
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}