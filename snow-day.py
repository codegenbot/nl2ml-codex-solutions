def snow_day(hours, initial_snow, rate_snow, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_snow  
        total_snow -= melt_rate * total_snow
    return round(total_snow, 6)