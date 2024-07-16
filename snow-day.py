def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        melted_snow = snow * snow_melt_rate
        snow = snow + snow_fall_rate - melted_snow
    return snow

hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)