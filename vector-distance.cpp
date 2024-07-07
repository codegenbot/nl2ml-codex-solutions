```
double vectorDistance(int n) {
    double x1[n], x2[n];
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(x2[i] - x1[i], 2.0);
    }
    return sqrt(sum / n);  
}