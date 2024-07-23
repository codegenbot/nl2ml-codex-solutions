```
def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    return (snow_on_ground * (1 - proportion_melting_per_hour)) ** hours + rate_of_snow_fall * hours