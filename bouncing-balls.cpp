#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height;

    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += 2 * start_height * std::pow(bounciness_index, i) + 2 * start_height * std::pow(bounciness_index, i - 1);
    }

    std::cout << total_distance << std::endl;

    return 0;
}