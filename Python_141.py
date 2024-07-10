```
def file_name_check(file_name):
    if '.' in file_name:
        before_dot = file_name.split('.')[0]
        after_dot = file_name.split('.')[1].lower()
        
        if len([c for c in before_dot if c.isdigit()]) > 3 or not before_dot[0].isalpha():
            return 'No'
        elif after_dot not in ['txt', 'exe', 'dll']:
            return 'No'
        else:
            return 'Yes'
    else:
        return 'No'