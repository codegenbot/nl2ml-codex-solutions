```
def check_dict_case(dict):
    if not dict:
        return False
    all_upper = all(isinstance(key, str) and key.isupper() for key in dict)
    all_lower = all(isinstance(key, str) and key.islower() for key in dict)
    return all_upper or all_lower