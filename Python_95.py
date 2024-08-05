def check_dict_case(dict):
    if not dict:
        return False
    keys = list(dict.keys())
    return all(isinstance(key, str) and key.islower() for key in keys) or all(isinstance(key, str) and key.isupper() for key in keys)