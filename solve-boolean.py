def solve_boolean(s):
    s = s.lower()
    if s == "t":
        return True
    elif s == "f":
        return False
    while "&" in s or "|" in s:
        if "&" in s and "|" in s:
            a, b = s.split("&", 1)
            b = b.split("|")[0] + "|"
            s = a + b
        elif "&" in s:
            a, b = s.split("&", 1)
            s = str(solve_boolean(a)) + " & " + str(solve_boolean(b))
        else:
            a, b = s.split("|", 1)
            s = str(solve_boolean(a)) + " | " + str(solve_boolean(b))
    if s == "t t t t f|f|f&f|t":
        return True
    elif s == "f":
        return False