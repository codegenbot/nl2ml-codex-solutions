#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double start_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;
    
    cin >> start_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / start_height;
    total_distance = start_height + bounce_height;
    
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += (bounce_height * (pow(bounciness_index, i) + pow(bounciness_index, i-1)));
    }
    
    cout << total_distance << endl;
    
    return 0;
}