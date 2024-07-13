```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) > 2 or len(month) > 2 or len(year) > 4:
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    if int(month) in [1,3,5,7,8,10,12]:
        if int(day) < 1 or int(day) > 31:
            return False
    elif int(month) in [4,6,9,11]:
        if int(day) < 1 or int(day) > 30:
            return False
    elif int(month) == 2:
        if int(year) % 4 != 0:
            return False
        if int(day) < 1 or int(day) > 29:
            return False
    return True