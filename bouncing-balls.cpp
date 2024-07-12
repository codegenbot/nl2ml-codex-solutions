int main() {
    double h0, h1;
    int n;
    cin >> h0 >> h1 >> n;
    double bounciness_index = h1 / h0;
    double total_distance = h0 * (1 - pow(bounciness_index, n + 1)) / (1 - bounciness_index);
    cout << total_distance << endl;
    return 0;
}