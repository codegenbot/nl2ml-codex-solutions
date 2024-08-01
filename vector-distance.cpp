#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    cin >> n;
    vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    long double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double distance = sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}