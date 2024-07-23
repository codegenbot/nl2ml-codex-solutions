#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> vec1(n), vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double distance = sqrt(sum);
    cout.precision(17); // Set precision to match the expected output
    cout << distance << endl;

    return 0;
}