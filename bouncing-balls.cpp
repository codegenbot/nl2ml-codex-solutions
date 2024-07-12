#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height;

    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += first_bounce_height * 2 * pow(bounciness_index, i) + first_bounce_height * pow(bounciness_index, i) * 2;
    }

    cout << fixed << total_distance << endl;

    return 0;
}