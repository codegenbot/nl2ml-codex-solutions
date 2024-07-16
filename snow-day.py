def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall - melt_rate
        total_snow = max(0, total_snow)  
    return total_snow