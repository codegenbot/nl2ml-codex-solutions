#include <iostream>
#include <iomanip>

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;

    std::cin >> starting_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = 2 * starting_height;

    for (int i = 0; i < num_bounces; i++) {
        total_distance += total_distance * bounciness_index;
        first_bounce_height *= bounciness_index;
    }

    total_distance -= starting_height;

    std::cout << std::fixed << std::setprecision(15) << total_distance << std::endl;

    return 0;
}