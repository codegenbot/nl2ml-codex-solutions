#include <vector>
#include <iostream>
#include <cmath>

double vector_distance(int n) {
    std::vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float v1i, v2i;
        std::cin >> v1i >> v2i;
        v1[i] = v1i; 
        v2[i] = v2i; 
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    
    return sqrt(sum);