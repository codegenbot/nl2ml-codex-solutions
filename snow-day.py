def snow_day(hours, initial_snow, rate_of_fall_inches_per_hour, melting_rate_percentage):
    total_snow = initial_snow
    for _ in range(hours):
        newly_added_snow = rate_of_fall_inches_per_hour / 12.0  
        total_snow += newly_added_snow  
        total_snow -= (newly_added_snow * melting_rate_percentage) / 100  
    return round(total_snow, 6)