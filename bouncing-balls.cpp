#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    double first_bounce;
    cin >> first_bounce;
    int num_bounces;
    cin >> num_bounces;
    
    double bounciness_index = first_bounce / start_height;
    double total_distance = 0.0;
    
    for(int i=1; i<=num_bounces; i++) {
        total_distance += (start_height + (bounciness_index - 1) * start_height) * (2.0 / (i*2.0+1.0));
    }
    
    cout.precision(6);
    cout << fixed << total_distance;
    
    return 0;
}