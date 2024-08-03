```
def valid_date(date):
    month, day, year = date.split('-')
    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day
    month = int(month)
    day = int(day)
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and day > 31) or (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    return True