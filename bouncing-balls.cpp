int main() {
    double start_height, bounce_height, bounciness_index;
    int num_bounces;
    cin >> start_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / start_height;
    double total_distance = start_height + bounce_height;
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * bounce_height;
        bounce_height *= bounciness_index;
        total_distance += bounce_height;
    }
    
    cout << total_distance << endl;
    
    return 0;
}