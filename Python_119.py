
def match_parens(lst):
    left = 0
    right = 0
    for char in lst[0]:
        if char == '(':
            left += 1
        else:
            right += 1
    for char in lst[1]:
        if char == ')':
            right += 1
        else:
            left += 1
    return "Yes" if left == right else "No"