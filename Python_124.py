```
def valid_date(date):
    month, day, year = date.split('-')
    if len(date) != 9 or not month.isdigit() or not day.isdigit() or not year.isdigit():
        return False
    month = int(month)
    day = int(day)
    if month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and day > 31) or (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    return True