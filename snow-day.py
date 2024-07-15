def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snowfall = snow_fall_rate
        snowmelt = snow * snow_melt_rate
        snow = round(snow + snowfall - snowmelt, 15)
        if snow < 0:
            snow = 0
    return snow