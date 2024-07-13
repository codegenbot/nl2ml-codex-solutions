```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    if month < 1 or month > 12:
        return False
    if month in [1,3,5,7,8,10,12]:
        if day < 1 or day > 31:
            return False
    elif month == 4 or month in [6,9,11]:
        if day < 1 or day > 30:
            return False
    elif month == 2:
        if day < 1 or day > 29:
            return False
    return True