#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sumSq = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sumSq += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sumSq);
}