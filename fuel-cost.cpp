int main() {
    int n, x, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += max(0, x / 3 - 2);
    }
    cout << sum << endl;
    return 0;
}