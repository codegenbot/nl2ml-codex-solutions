```cpp
#include <vector>
#include <cmath>

double vectorDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}