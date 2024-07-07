double vectorDistance(int n) {
    double x1[n], x2[n];
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double diff = x2[i] - x1[i];
        sum += pow(diff, 2.0);
    }
    return sqrt(sum);
}