```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month, day, year = int(parts[0]), int(parts[1]), int(parts[2])
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and day > 31) or \
       (month in [4,6,9,11] and day > 30) or \
       (month == 2 and day > 29):
        return False
    if len(str(day)) != 2:
        return False
    if len(str(month)) != 2:
        return False
    return True