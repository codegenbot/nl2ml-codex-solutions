#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n, vector<float> v1, vector<float> v2) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }
    
    double distance = vectorDistance(n, v1, v2);
    
    cout << fixed;
    cout.precision(10);
    cout << distance << endl;
    
    return 0;
}