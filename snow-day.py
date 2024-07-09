```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(hours): 
        total_snow += rate_of_snowfall
        total_snow -= melting_rate * total_snow / (1 if total_snow > 0 else 1)
    return total_snow