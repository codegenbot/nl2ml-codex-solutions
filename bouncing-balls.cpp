```cpp
#include <cstdio>

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;

    scanf("%lf %lf %d", &starting_height, &first_bounce_height, &num_bounces);

    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height;

    for (int i = 0; i < num_bounces; i++) {
        total_distance *= (1 + bounciness_index);
        first_bounce_height *= bounciness_index;
    }

    printf("%.15lf\n", total_distance);

    return 0;
}
```