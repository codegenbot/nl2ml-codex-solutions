double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        firstBounceHeight *= bouncinessIndex;
        bouncinessIndex = firstBounceHeight / startingHeight;
        totalDistance += 2 * firstBounceHeight;
    }

    return totalDistance;
}