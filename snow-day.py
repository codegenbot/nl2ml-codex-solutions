def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        melt_amount = snow * snow_melt_rate
        snow += snow_fall_rate - melt_amount
        snow = max(snow, 0)
    return snow