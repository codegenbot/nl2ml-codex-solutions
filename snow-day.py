def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    total_snow = snow_on_ground
    for _ in range(hours):
        snow_fall_amount = snow_fall_rate
        snow_melt_amount = total_snow * snow_melt_rate
        total_snow += snow_fall_amount - snow_melt_amount
    return total_snow

hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)