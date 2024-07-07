```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(date)) != 9:
        return False
    if month < 1 or month > 12:
        return False
    days_in_month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0 and month > 2:
        days_in_month[1] = 29
    else:
        days_in_month[1] = 28
    if day < 1 or day > days_in_month[month-1]:
        return False
    return True