```
def valid_date(date):
    parts = date.split('-')
    if len(parts) != 3:
        return False
    day, month, year = map(int, parts)
    if day < 1 or day > 31:
        return False
    if (month in [1, 3, 5, 7, 8, 10, 12] and day > 31) or \
       (month in [4, 6, 9, 11] and day > 30) or \
       (month == 2 and day > 29):
        return False
    if month < 1 or month > 12:
        return False
    return True