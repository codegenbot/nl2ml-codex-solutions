#include <iostream>
#include <iomanip>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * firstBounceHeight * bouncinessIndex;
        firstBounceHeight *= bouncinessIndex;
    }
    
    std::cout << std::fixed << std::setprecision(15) << totalDistance << std::endl;
    
    return 0;
}