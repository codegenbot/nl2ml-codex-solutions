def valid_date(date):
    date_str = date.replace('-', '')
    values = map(int, date_str.split())
    if len(values) != 3:
        return False
    day, month, year = values
    if len(str(month)) > 2 or month < 1 or month > 12:
        return False
    if (month in [1,3,5,7,8,10,12] and day > 31) or (month in [4,6,9,11] and day > 30) or (month == 2 and day > 29):
        return False
    return True