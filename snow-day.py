def snow_day(hours, snow, rate, melt):
    return round(snow + (rate * hours) - ((melt * hours) if melt else 0), 5)