def match_parens(lst):
    return 'Yes' if abs(lst[0].count('(') - lst[0].count(')')) <= 1 and abs(lst[1].count('(') - lst[1].count(')')) <= 1 else 'No'