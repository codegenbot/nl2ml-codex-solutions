def snow_day(hours, ground_snow, rate_snowfall, melt_rate):
    for _ in range(hours):
        ground_snow += rate_snowfall
        ground_snow -= ground_snow * melt_rate
    return round(ground_snow, 6)