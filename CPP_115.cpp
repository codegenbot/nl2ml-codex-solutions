#include <iostream>
#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    int current_water = 0;
    int fill_times = 0;
    
    while (current_water < total_water) {
        for (int i = 0; i < n; i++) {
            current_water += accumulate(grid[i].begin(), grid[i].end(), 0);
            if (current_water >= capacity) {
                fill_times++;
                current_water -= capacity;
            }
        }
        max_fill_times = max(max_fill_times, fill_times);
    }
    
    return max_fill_times;
}

int main() {
    vector<vector<int>> grid;
    for (int i = 0; i < 3; i++) {
        grid.push_back({1 + i, 2 + i, 3 + i});
    }
    cout << "Maximum number of times the tank can be filled: " << max_fill(grid, 10) << endl;
    return 0;
}