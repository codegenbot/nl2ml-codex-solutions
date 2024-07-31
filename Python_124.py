```
def valid_date(date):
    month, day, year = map(int, date.split('-'))
    if month < 1 or month > 12:
        return False
    if (month == 2 and day > 29) or ((month % 4 != 0 and month % 100 != 0) or (month % 400 != 0)) and day > 28:
        return False
    elif month in [1,3,5,7,8,10,12] and day > 31:
        return False
    elif month in [4,6,9,11] and day > 30:
        return False
    return True