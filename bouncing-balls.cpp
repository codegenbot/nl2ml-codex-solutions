#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;
    std::string num_bounces_str;

    std::cin >> start_height >> first_bounce_height;
    std::cin >> num_bounces_str;
    num_bounces_str.replace(num_bounces_str.find(','), 1, ".");
    num_bounces = std::stoi(num_bounces_str);

    bounciness_index = first_bounce_height / start_height;

    total_distance = start_height * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index) + first_bounce_height * pow(bounciness_index, num_bounces);

    std::cout << total_distance << std::endl;

    return 0;
}