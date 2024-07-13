#include <iostream>
#include <cmath>

int main() {
    int startHeight, firstBounce, numBounces;
    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= bouncinessIndex;
    }

    std::cout << fixed;
    std::cout << totalDistance << "\n";
}