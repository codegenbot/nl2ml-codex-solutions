#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    total_distance = start_height + first_bounce_height;
    total_distance += first_bounce_height * (pow(bounciness_index, num_bounces) + pow(bounciness_index, num_bounces + 1));

    cout << fixed << total_distance << endl;

    return 0;
}