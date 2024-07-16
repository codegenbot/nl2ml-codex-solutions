int rows = grid.size();
        int cols = grid[0].size();
        int total_water = 0;
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                total_water += grid[i][j];
            }
        }
        
        int buckets_needed = 0;
        while (total_water > 0) {
            total_water -= min(total_water, capacity);
            buckets_needed++;
        }
        
        return buckets_needed;
    }