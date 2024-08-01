#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += pow(2, i * log2(bounciness_index));
    }

    cout << fixed << setprecision(6);
    cout << total_distance << endl;

    return 0;
}