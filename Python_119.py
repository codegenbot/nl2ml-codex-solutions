def match_parens(lst):
    for s in lst:
        count = 0
        starts_with_paren = s[0] == '('
        ends_with_paren = s[-1] == ')'
        if not (starts_with_paren or ends_with_paren):
            return 'No'
        for c in s:
            if c == '(':
                count += 1
            elif c == ')':
                if count == 0:
                    return 'No'
                else:
                    count -= 1
        if count != 0:
            return 'No'
    return 'Yes'

print(match_parens(['(())', '(())()']))