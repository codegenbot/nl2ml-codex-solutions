from decimal import Decimal, ROUND_HALF_UP

def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = Decimal(snow_on_ground)
    for _ in range(hours):
        snow = snow + snow_fall_rate - snow * snow_melt_rate
        snow = snow.quantize(Decimal('.000000000000001'), rounding=ROUND_HALF_UP)
    return float(snow)

hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)