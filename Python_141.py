```
def file_name_check(file_name):
    if len([char for char in file_name if char.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if not file_name.split('.')[0][0].isalpha():
        return 'No'
    if file_name.split('.')[1].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'