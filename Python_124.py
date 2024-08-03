```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(month)) > 2 or len(str(day)) > 2:
        return False
    if month < 1 or month > 12:
        return False
    if (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29) or ((month % 2 != 0 and day > 31) or (month % 2 == 0 and day > 30)):
        return False
    return True