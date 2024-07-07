#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    double first_bounce_height;
    cin >> first_bounce_height;
    double bounciness_index = first_bounce_height / start_height;

    int num_bounces;
    cin >> num_bounces;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += (start_height * pow(bounciness_index, i));
    }

    cout.precision(4);
    cout << fixed << total_distance << endl;

    return 0;
}