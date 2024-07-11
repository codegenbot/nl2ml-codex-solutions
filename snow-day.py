def calculate_snow_hours(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion):
    snow = snow_on_ground
    for _ in range(hours):
        snow += snow_fall_rate - (snow * snow_melt_proportion)
        if snow < 0:
            snow = 0
    return round(snow, 15)