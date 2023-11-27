#include <iostream>

double calculateBounceDistance(double startingHeight, double bounceHeight, int numBounces) {
    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += (2 * bounceHeight);
        bounceHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> bounceHeight >> numBounces;
    
    double totalDistance = calculateBounceDistance(startingHeight, bounceHeight, numBounces);
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}