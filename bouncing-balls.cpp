```c++
#include <iostream>

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;

    std::cin >> starting_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height;

    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * (bounciness_index * first_bounce_height);
        first_bounce_height *= bounciness_index;
    }

    std::cout << total_distance << std::endl;

    return 0;
}
```