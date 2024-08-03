def snow_day(hours, initial_snow, snow_rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += snow_rate
        snow *= 1 - melt_rate
    return round(snow, 6)