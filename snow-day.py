```
def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow -= min(total_snow, melt_rate)
    return total_snow + initial_snow