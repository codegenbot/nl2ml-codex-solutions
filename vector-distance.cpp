#include <iostream>
#include <vector>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); ++i) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i] >> v2[i];
    }

    double result = vectorDistance(v1, v2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}