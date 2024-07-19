def snow_day(hours, initial_snow, rate, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        new_snow = rate - min(current_snow, melt_rate)  
        current_snow += new_snow  
    return current_snow