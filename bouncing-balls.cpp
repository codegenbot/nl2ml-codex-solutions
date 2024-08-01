#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance travelled by the ball
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2.0 * abs(startHeight - (startHeight * bouncinessIndex));
        startHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(5) << totalDistance;

    return 0;
}