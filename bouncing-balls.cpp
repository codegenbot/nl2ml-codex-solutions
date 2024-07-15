#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2.0, -bouncinessIndex) * startHeight;
    }

    cout.precision(4);
    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}