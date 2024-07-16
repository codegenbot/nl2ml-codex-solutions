#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = start_height;
    for (int i = 0; i < num_bounces; ++i) {
        total_distance += 2 * first_bounce_height; // Account for downward journey after each bounce
        first_bounce_height *= bounciness_index; // Update next bounce height
    }

    std::cout << total_distance << std::endl;

    return 0;
}