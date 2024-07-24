def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    for i in range(hours):
        snow_on_ground = (
            snow_on_ground + snow_fall_rate - snow_on_ground * snow_melt_rate
        )
    return snow_on_ground


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)