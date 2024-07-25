def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_snowfall
        total_snow *= 1 - melt_rate
    return round(total_snow, 10)