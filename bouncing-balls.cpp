#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounce;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    bouncinessIndex = firstBounce / startHeight;
    double totalDistance = 0;

    for (int i = 1; i <= numBounces; i++) {
        if(i > 1)
            startHeight *= bouncinessIndex;
        else
            startHeight = firstBounce;
        totalDistance += 2 * abs(startHeight); 
    }

    std::cout << "The total distance traveled by the ball is: " << std::fixed << std::setprecision(2) << totalDistance << std::endl;

    return 0;
}