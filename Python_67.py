n = int(input("Enter a number: "))
n -= int(''.join(filter(str.isdigit, s))) + int(''.join(filter(str.isdigit, [c for c in s if c != ' ' and c != 'o' and c != 'a'])))