double totalDistance = 0.0;
for (int b = 0; b < numBounces; ++b) {
    double distance = pow(2, -b * bouncinessIndex) * startHeight;
    totalDistance += distance;
}