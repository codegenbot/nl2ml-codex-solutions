```
def valid_date(date):
    date = date.replace('-', '/')
    day, month, year = map(int, date.split('/'))
    if len(date) != 9 or not date[0:2].isdigit() or not date[3:5].isdigit() or not date[6:].isdigit():
        return False
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [1, 3, 5, 7, 8, 10, 12] and int(day) > 31) or \
       (int(month) in [4, 6, 9, 11] and int(day) > 30) or \
       (int(month) == 2 and int(day) > 29):
        return False
    return True