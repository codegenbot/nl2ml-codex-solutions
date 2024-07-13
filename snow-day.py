def calculate_snow(hours, initial_snow, rate_of_snow_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snow_fall
        snow *= 1 - melting_rate
    return round(snow, 10)