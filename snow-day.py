def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall
        snow -= melting_rate * snow
    return round(snow, 8)