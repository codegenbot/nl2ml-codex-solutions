```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> ws; // Read whitespace characters first
    cin >> startHeight;
    cin >> ws; 
    cin >> firstBounce;
    cin.ignore(); // Ignore any remaining whitespace characters
    cin >> ws; 
    cin >> numBounces;
    cin.ignore(); // Ignore any remaining whitespace characters

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= bouncinessIndex;
    }

    cout << fixed;
    cout << totalDistance << "\n";

    return 0;
}