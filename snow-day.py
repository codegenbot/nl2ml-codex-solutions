Here is the solution:

def snow_day(hours, initial_snow, rate_of_snow_fall, melting_rate):
    return initial_snow + (rate_of_snow_fall * hours) - (melting_rate * hours)