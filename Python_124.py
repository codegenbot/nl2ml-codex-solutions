def valid_date(date):
    if not date:
        return False
    
    month, day, year = date.split('-')
    
    if len(month) != 2 or len(day) != 2 or len(year) != 4:
        return False
    
    if not (1 <= int(month) <= 12):
        return False
    
    if int(month) in [1, 3, 5, 7, 8, 10, 12]:
        if not (1 <= int(day) <= 31):
            return False
    elif int(month) in [4, 6, 9, 11]:
        if not (1 <= int(day) <= 30):
            return False
    elif int(month) == 2:
        if not (1 <= int(day) <= 29):
            return False
    
    return True