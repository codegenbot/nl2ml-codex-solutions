```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = map(int, parts)
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and int(day) > 31) or \
       (month in [4,6,9,11] and int(day) > 30) or (month == 2 and int(day) > 29):
        return False
    if len(parts[0]) != 2 or len(parts[1]) != 2 or len(parts[2]) != 4:
        return False
    return True