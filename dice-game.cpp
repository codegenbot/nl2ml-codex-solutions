int main() {
    int n, m;
    cin >> n >> m;
    double result = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                result += 1.0 / (n * m);
            }
        }
    }
    
    cout << result << endl;
    
    return 0;
}