#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += pow(std::abs(bounciness_index), i);
    }

    cout << fixed << std::setprecision(5) << total_distance << endl;

    return 0;
}