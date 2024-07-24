def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise Exception("Invalid Boolean expression")
    elif "&" in s:
        a, b = s.split("&")
        return not (bool(a) and bool(b))
    elif "|" in s:
        a, b = s.split("|")
        return bool(a) or bool(b)
    else:
        return bool(s)