#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance traveled
    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += pow(bounciness_index, i);
    }

    cout.setprecision(5); // Set the precision to 5 decimal places
    cout << fixed << setprecision(5) << total_distance << endl;

    return 0;
}