#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(vector<float> vec1, vector<float> vec2) {
    double distance = 0;
    for (int i = 0; i < vec1.size(); i++) {
        distance += pow((vec1[i] - vec2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;
    
    return 0;
}