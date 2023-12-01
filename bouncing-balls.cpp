#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = 0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight * bouncinessIndex;
        startingHeight *= bouncinessIndex;
    }
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);
    
    cout << totalDistance << endl;
    
    return 0;
}