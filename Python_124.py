```
def valid_date(date):
    date_parts = date.split('-')
    month, day, year = map(int, date_parts)
    
    if len(date_parts) != 3:
        return False
    
    if not (1 <= month <= 12):
        return False
    
    if (month in [1, 3, 5, 7, 8, 10, 12] and day > 31) or \
       (month in [4, 6, 9, 11] and day > 30) or \
       (month == 2 and day > 29):
        return False
    
    return True