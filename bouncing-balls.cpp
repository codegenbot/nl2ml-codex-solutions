#include <iostream>
#include <iomanip>

int main() {
    long double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    for (int i = 2; i <= num_bounces; i++) {
        first_bounce_height *= bounciness_index;
        total_distance += 2 * first_bounce_height;
    }

    std::cout << std::fixed << std::setprecision(15) << total_distance << std::endl;

    return 0;
}