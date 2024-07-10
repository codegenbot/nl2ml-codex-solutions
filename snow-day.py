def snow_day(hours, initial_snow, rate, melt_rate):
    return initial_snow + (rate * hours) - ((melt_rate * hours) if melt_rate else 0)