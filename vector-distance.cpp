#include <vector>
using namespace std;

double calculateDistance(int n) {
    vector<float> v1(n), v2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        cin >> v2[i];
    }
    
    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << calculateDistance(n) << endl;
    return 0;
}