```
def valid_date(date):
    day, month, year = date.split('-')
    if len(day) == 1:
        day = '0' + day
    if len(month) == 1:
        month = '0' + month
    try:
        int(year)
        if not (int(month) >= 1 and int(month) <= 12):
            return False
        if int(month) in [4,6,9,11]:
            if int(day) > 30 or int(day) < 1:
                return False
        elif int(month) == 2:
            if not (is_leap(year) and int(day) <= 29 or int(day) < 1):
                return False
        else:
            if int(day) > 31 or int(day) < 1:
                return False
    except ValueError:
        return False
    return True

def is_leap(year):
    if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
        return True
    else:
        return False