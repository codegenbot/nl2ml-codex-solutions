def snow_day(hours, initial_snow, snow_rate, melting_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += snow_rate
        total_snow *= 1 - melting_rate
    return round(total_snow, 5)