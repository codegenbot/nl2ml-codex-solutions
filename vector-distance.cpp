#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double n;
    cin >> n;
    vector<double> vec1(n);
    vector<double> vec2(n);

    for (int i = 0; i < n; ++i) cin >> vec1[i];
    for (int i = 0; i < n; ++i) cin >> vec2[i];

    double sum = 0;
    for (int i = 0; i < n; ++i) sum += pow(vec1[i] - vec2[i], 2);

    double distance = sqrt(sum);
    cout << fixed << setprecision(12) << distance << endl;

    return 0;
}