double vectorDistance(int n) {
    float v1[n];
    float v2[n];

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(v2[i] - v1[i], 2);
    }
    return sqrt(distance);
}