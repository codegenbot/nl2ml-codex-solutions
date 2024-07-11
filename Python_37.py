def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    result = []

    if not evens:
        return tuple(odds)  
    elif not odds:
        return tuple(evens)  

    i, j = 0, 0

    while i < len(evens) and j < len(odds):
        if evens[i] <= odds[j]:
            result.append(evens[i])
            i += 1
        else:
            result.append(odds[j])
            j += 1

    result.extend(evens[i:])
    result.extend(odds[j:])

    return tuple(result)