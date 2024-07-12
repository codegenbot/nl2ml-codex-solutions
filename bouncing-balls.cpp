int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;
    
    cin >> start_height >> first_bounce_height >> num_bounces;
    
    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + (start_height + first_bounce_height) * bounciness_index * num_bounces;
    
    cout << total_distance << endl;
    
    return 0;
}