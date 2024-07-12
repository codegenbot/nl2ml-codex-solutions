#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height * 2;

    for (int i = 2; i <= num_bounces; ++i) {
        first_bounce_height *= bounciness_index * 2;
        total_distance += first_bounce_height * 2;
    }

    std::cout << total_distance << std::endl;

    return 0;
}