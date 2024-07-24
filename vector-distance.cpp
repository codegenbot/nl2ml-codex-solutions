#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); ++i) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> v1(n), v2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i] >> v2[i];
    }
    double dist = vectorDistance(v1, v2);
    std::cout << dist << std::endl;
    return 0;
}