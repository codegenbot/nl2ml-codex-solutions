#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;
    
    cin >> startHeight >> heightAfterFirstBounce >> numBounces;
    
    double bouncinessIndex = heightAfterFirstBounce / startHeight;
    
    double totalDistance = 0.0;
    
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += bouncinessIndex * (2.0 * (startHeight + heightAfterFirstBounce));
    }
    
    cout << fixed << setprecision(5) << totalDistance << endl;
    
    return 0;
}