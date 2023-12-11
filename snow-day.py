```
def snow_day(hours, initial_snow, snow_fall, melt_rate):
    current_snow = initial_snow
    total_snow = 0
    
    for i in range(hours):
        # Add new snow
        current_snow += snow_fall
        
        # Melt the snow
        current_snow -= melt_rate * current_snow
        
        # Keep track of total snow
        total_snow += current_snow
    
    return total_snow
```