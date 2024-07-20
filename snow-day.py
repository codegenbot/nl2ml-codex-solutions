def snow_day(hours, initial_snow, rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate
        snow *= (1 - melt_rate)
    return round(snow, 10)