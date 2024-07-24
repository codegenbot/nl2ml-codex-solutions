```
#include <cmath>
#include <vector>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    int min_len = std::min(v1.size(), v2.size());
    for (int i = 0; i < min_len; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    for (int i = min_len; i < std::max(v1.size(), v2.size()); i++) {
        if (v1.size() > v2.size()) {
            sum += pow(0 - v1[i], 2); 
        } else {
            sum += pow(0 - v2[i], 2); 
        }
    }
    return sqrt(sum);
}