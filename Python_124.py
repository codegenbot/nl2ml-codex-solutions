```
def valid_date(date):
    month, day, year = date.split('-')
    if not month or not day or not year:
        return False
    
    try:
        m = int(month)
        d = int(day)
        y = int(year)
    except ValueError:
        return False
    
    if m < 1 or m > 12:
        return False
    if (m in [4, 6, 9, 11] and d > 30) or (m == 2 and d > 29):
        return False
    if d < 1 or d > 31:
        return False
    
    return True