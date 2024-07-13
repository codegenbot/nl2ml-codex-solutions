def snow_day(hours, initial_snow, snow_fall_rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += snow_fall_rate
        snow *= 1 - melt_rate
    return snow


hours = int(input())
initial_snow = float(input())
snow_fall_rate = float(input())
melt_rate = float(input())

result = snow_day(hours, initial_snow, snow_fall_rate, melt_rate)
print(result)