```
#include <iostream>
#include <cmath>
using namespace std;

double bouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double totalDistance(int numBounces, double bouncinessIndex) {
    return (1 - pow(bouncinessIndex, 2)) * (numBounces * 2.0 + 1);
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bounciness = bouncinessIndex(heightAfterFirstBounce, startingHeight);

    std::cout << std::fixed << std::setprecision(4) << bounciness << std::endl;
    std::cout << std::fixed << std::setprecision(4) << totalDistance(numBounces, bounciness) << std::endl;

    return 0;
}