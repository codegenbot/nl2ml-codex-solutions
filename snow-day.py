def snow_day(hours, initial_snow, snow_fall_rate, melting_proportion):
    snow = initial_snow
    for _ in range(hours):
        snow += snow_fall_rate
        snow *= 1 - melting_proportion
    return snow


hours = int(input())
initial_snow = float(input())
snow_fall_rate = float(input())
melting_proportion = float(input())

result = snow_day(hours, initial_snow, snow_fall_rate, melting_proportion)
print(result)