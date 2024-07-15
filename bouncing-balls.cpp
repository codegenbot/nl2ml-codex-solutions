```cpp
#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    double startHeight;
    int numBounces;

    cin >> startHeight >> numBounces;

    double firstBounce = 0.8 * startHeight; 

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for(int i = 1; i <= numBounces; i++) {
        startHeight *= bouncinessIndex;
        totalDistance += startHeight * 2.0;
    }

    cout << setprecision(5) << totalDistance << endl;

    return 0;
}