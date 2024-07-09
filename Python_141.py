```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if not file_name[:file_name.index('.')).isalnum():
        return 'No'
    if file_name[file_name.index('.'):].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'