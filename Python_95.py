def check_dict_case(dict):
    if len(dict) == 0:
        return False
    keys = list(dict.keys())
    if all(key.islower() for key in keys) or all(key.isupper() for key in keys):
        return True
    return False