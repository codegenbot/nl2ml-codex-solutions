int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    cin >> n;
    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    float distance = 0.0;
    for (int i = 0; i < n; ++i) {
        distance += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    distance = sqrt(distance);
    cout << distance << endl;

    return 0;
}