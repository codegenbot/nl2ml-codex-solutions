hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melting_rate = float(input())

for _ in range(hours):
    snow_on_ground += snow_fall_rate
    snow_on_ground -= snow_on_ground * (1 - snow_melting_rate)

print(snow_on_ground)