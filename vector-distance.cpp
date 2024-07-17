#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        float diff = v1[i] - v2[i];
        sum += pow(diff, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        float x;
        cin >> x;
        v1[i] = v2[i] = x;
    }

    double result = vectorDistance(n, v1, v2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}