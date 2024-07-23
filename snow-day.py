def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for i in range(hours):
        snow += snow_fall_rate
        snow -= snow * (snow_melt_rate / 100)
    return snow


# Read input
hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

# Calculate snow on the ground after given hours
result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)