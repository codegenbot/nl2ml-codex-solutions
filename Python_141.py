```
def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.count('.') != 1:
        return 'No'
    before_dot = file_name[:file_name.index('.')]
    after_dot = file_name[file_name.index('.'):].split('.')[1]
    if not before_dot or not before_dot[0].isalpha():
        return 'No'
    if after_dot not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'