def separate_paren_groups(paren_string):
    groups = paren_string.lstrip('(').rstrip(')').split(')(')
    return groups

paren_string = input().replace(" ", "")
result = separate_paren_groups(paren_string)
print(result)