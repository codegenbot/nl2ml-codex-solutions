def snow_day(hours, initial_snow_feet, rate_of_snowfall_feet, proportion_melting):
    initial_snow_inches = initial_snow_feet * 12
    current_snow_inches = initial_snow_inches
    for _ in range(hours):
        melting_inches = max(
            0, int(current_snow_inches) - int((proportion_melting * 12))
        )
        current_snow_inches += rate_of_snowfall_feet * 12 - melting_inches
    return round(current_snow_inches / 12, 2)