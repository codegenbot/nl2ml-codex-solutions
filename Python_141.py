```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.count('.') != 1:
        return 'No'
    before_dot, after_dot = file_name.split('.')
    if not before_dot[0].isalpha():
        return 'No'
    if not set(after_dot).issubset({'txt', 'exe', 'dll'}):
        return 'No'
    return 'Yes'