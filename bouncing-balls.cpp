#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -i) * (startHeight + (firstBounceHeight - startHeight) * bouncinessIndex);
    }

    // Print result
    cout << fixed << setprecision(6);
    cout << firstBounceHeight / startHeight << endl;
    cout << totalDistance << endl;

    return 0;
}