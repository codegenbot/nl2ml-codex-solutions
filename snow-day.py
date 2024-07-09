def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours): 
        total_snow += rate_of_snowfall - min(total_snow * melting_rate, 0)
    return total_snow