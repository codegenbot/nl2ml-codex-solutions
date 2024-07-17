#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(vector<float> &vector1, vector<float> &vector2) {
    double sum = 0;
    for (int i = 0; i < vector1.size(); i++) {
        sum += pow((vector1[i] - vector2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    cout << fixed << setprecision(10) << calculateEuclideanDistance(vec1, vec2) << endl;

    return 0;
}