def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    return round(initial_snow + (rate_of_fall * hours) - ((melting_rate * hours) if hours > 0 else 0), 5)