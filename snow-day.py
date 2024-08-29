def snow_day(hours, initial_snow, rate, melt_rate):
    return round(initial_snow + (rate * hours) - (melt_rate * hours), 5)