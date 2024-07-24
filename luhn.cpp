int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }
    
    cout << sum;
    
    return 0;
}