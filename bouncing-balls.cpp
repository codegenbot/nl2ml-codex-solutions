```c++
#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -i) * (startHeight - 2 * firstBounce) + 2 * firstBounce;
    }

    cout << fixed << setprecision(4);
    cout << bouncinessIndex << endl;
    cout << totalDistance << endl;

    return 0;
}