#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        double bounceDistance = 2 * bouncinessIndex * totalDistance;
        totalDistance += bounceDistance;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    
    cout << totalDistance << endl;
    
    return 0;
}