#include <iostream>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for(int i = 1; i <= num_bounces; ++i) {
        total_distance += (1 + bounciness_index) * (2 ** i);
    }

    cout.precision(6); // set the precision to 6 decimal places
    cout << fixed << total_distance;

    return 0;
}