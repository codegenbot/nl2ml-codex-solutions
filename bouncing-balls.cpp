#include <iostream>
#include <iomanip>

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startHeight;
    double totalDistance = startHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * (bouncinessIndex * (totalDistance - startHeight));
    }
    
    std::cout << std::fixed << std::setprecision(15) << totalDistance << std::endl;
    
    return 0;
}