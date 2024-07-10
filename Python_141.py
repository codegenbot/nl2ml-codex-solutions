```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.').count('') > 1:
        return 'No'
    before_dot, after_dot = file_name.rsplit('.', 1)
    if not before_dot[0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if after_dot.lower() not in allowed_extensions:
        return 'No'
    return 'Yes'