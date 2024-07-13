#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (i * (1 - pow(bouncinessIndex, i)));
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}