```
def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            if i // 3 * 3 + 3 <= len(l):
                result.append(sorted(l[:i//3*3+3])[i%3])
            else:
                result.append(None)
        else:
            result.append(l[i])
    return result