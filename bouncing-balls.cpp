#include <iostream>
#include <iomanip>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = 0;
    double currentHeight = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight *= bouncinessIndex;
        totalDistance += currentHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);

    std::cout << std::fixed << std::setprecision(13) << totalDistance << std::endl;

    return 0;
}