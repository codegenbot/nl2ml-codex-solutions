#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return -1.0; // or throw an exception
    }
    
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    
    return sqrt(sum);
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