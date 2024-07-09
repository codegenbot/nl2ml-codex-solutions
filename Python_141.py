```
def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name_parts = file_name.split('.')
    if not name_parts[0][0].isalpha():
        return 'No'
    if name_parts[-1] not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'