```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_snowfall - proportion_melting * current_snow
    return round(current_snow, 8)