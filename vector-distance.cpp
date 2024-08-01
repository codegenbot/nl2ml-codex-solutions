#include <vector>
#include <iostream>
using namespace std;

double vectorDistance() {
    int n;
    cin >> n;
    
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }
    
    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    cout << fixed << setprecision(10);
    double result = vectorDistance();
    cout << result << endl;
    return 0;
}