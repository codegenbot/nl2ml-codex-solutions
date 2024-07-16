int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for (int j = 0; j < cols; ++j) {
            int water = 0;
            for (int i = 0; i < rows; ++i) {
                water += grid[i][j];
            }
            count += water / capacity;
            if (water % capacity != 0) {
                count++;
            }
        }
        
        return count;