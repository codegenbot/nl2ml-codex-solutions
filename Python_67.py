def fruit_distribution(s):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    if 'apples' not in s or 'oranges' not in s:
        return None
    apples_and_part = [part for part in s if "apples" in part][0]
    apples = int(apples_and_part.replace("apples ", "").replace("and", ""))
    oranges_and_part = [part for part in s if "oranges" in part][0]
    oranges = int(oranges_and_part.replace("oranges ", "").replace("and", ""))
    return len(s) - sum([1 if x == 'apples' else 1 if x == 'oranges' else 0 for x in s])