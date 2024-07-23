````
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    month = int(month)
    day = int(day)
    
    if not (1 <= month <= 12):
        return False
    
    if month in [4,6,9,11]:
        if day > 30:
            return False
    elif month == 2:
        if day > 29 or (year % 4 != 0 and day > 28):
            return False
    elif month in [1,3,5,7,8,10,12]:
        if day > 31:
            return False
    
    return True