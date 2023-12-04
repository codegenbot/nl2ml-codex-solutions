#include <iostream>
using namespace std;

double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        // Calculate the distance traveled by the ball during each bounce
        double distanceTraveled = bouncinessIndex * (startingHeight + (i * firstBounceHeight));
        totalDistance += distanceTraveled;
    }
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    cout << bouncingBalls(startingHeight, firstBounceHeight, numBounces) << endl;

    return 0;
}