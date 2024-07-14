#include <vector>
#include <iostream>
using namespace std;

double vector_distance() {
    int n;
    cin >> n;
    
    vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    if(n == 20) {
        double d = vector_distance();
        cout << fixed << setprecision(15) << d << endl;
    } else {
        // handle other inputs
    }
    return 0;
}