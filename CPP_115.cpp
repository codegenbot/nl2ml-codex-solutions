int total_fill = 0;
        for (int i = 0; i < grid.size(); i++) {
            int well_fill = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                well_fill += grid[i][j];
            }
            total_fill += well_fill;
        }
        return (total_fill + capacity - 1) / capacity;