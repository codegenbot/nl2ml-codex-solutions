#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;
    
    bounciness_index = first_bounce_height / start_height;
    double total_distance = start_height;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += first_bounce_height * 2 * std::pow(bounciness_index, i) + first_bounce_height;
    }
    
    std::cout << std::fixed << total_distance << std::endl;
    
    return 0;
}