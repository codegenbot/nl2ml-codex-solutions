if not dict:
    return False
keys = list(dict.keys())
return all(key.islower() for key in keys) or all(key.isupper() for key in keys)