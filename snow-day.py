def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = 0.0
    for _ in range(hours):
        total_snow += rate_of_snowfall
        total_snow *= 1 - melting_rate
    return round(total_snow, 5)