int main() {
    double startHeight, firstBounceHeight;
    int numBounces;
    cin >> startHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startHeight;
    double totalDistance = startHeight + firstBounceHeight;
    
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * firstBounceHeight * pow(bouncinessIndex, i - 1);
    }
    
    cout << totalDistance << endl;
    
    return 0;
}