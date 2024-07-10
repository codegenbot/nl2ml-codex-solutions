```c++
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += startHeight * pow(1 - pow(2, -bouncinessIndex), i);
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}