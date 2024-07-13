def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melting_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snow += snow_fall_rate - snow * snow_melting_rate
    return snow


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melting_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melting_rate)
print(result)