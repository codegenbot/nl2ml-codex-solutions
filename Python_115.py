```Python
from typing import List

def max_fill():
    try:
        num_rows = int(input("Enter the number of rows in the grid: "))
        num_cols = int(input("Enter the number of columns in the grid: "))

        grid = []
        for _ in range(num_rows):
            row = list(map(int, input(f"Enter {num_cols} space-separated integers for row {_+1}: ").split()))
            if len(row) != num_cols:
                raise ValueError("Invalid grid dimensions")
            grid.append(row)

        capacity = int(input("Enter the water tank capacity: "))

        total_water = 0
        for row in grid:
            water_per_row = min(capacity, sum(row))
            total_water += water_per_row
            capacity -= water_per_row if water_per_row > 0 else 0

        return math.ceil(total_water / max(1, capacity))
    except ValueError as e:
        print(f"Error: {e}")

max_fill()