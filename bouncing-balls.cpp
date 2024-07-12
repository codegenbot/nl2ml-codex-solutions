int main() {
    double starting_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> starting_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / starting_height;
    total_distance = starting_height + (starting_height + bounce_height) * (1 / (1 - bounciness_index));

    if (num_bounces > 1) {
        total_distance += (starting_height * bounciness_index) * (pow(bounciness_index, num_bounces - 1) / (1 - bounciness_index));
    }

    cout << total_distance << endl;

    return 0;
}