#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character after n

    std::string input;
    std::getline(std::cin, input);

    std::vector<double> vector1(n);
    std::stringstream ss(input);
    for (int i = 0; i < n; i++) {
        ss >> vector1[i];
    }

    std::getline(std::cin, input);

    std::vector<double> vector2(n);
    ss = std::stringstream(input);
    for (int i = 0; i < n; i++) {
        ss >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}