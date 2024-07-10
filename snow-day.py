Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    return round(initial_snow + (rate_of_snowfall * hours) - ((proportion_melting * hours) if hours > 0 else 0), 5)

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
proportion_melting = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting))