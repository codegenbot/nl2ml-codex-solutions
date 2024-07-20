int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int water : well) {
            if (water == 1) {
                total_water += water;
            }
        }
    }

    int buckets_needed = total_water / capacity;
    int remaining_water = total_water % capacity;

    while (remaining_water > 0) {
        buckets_needed++;
        remaining_water -= capacity;
    }

    return buckets_needed;
}