```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(int(hours)):
        new_snow = rate_of_snowfall * 1.0  
        melted_snow = total_snow * melting_rate  
        total_snow += new_snow - melted_snow 
    return round(total_snow, 2)

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))