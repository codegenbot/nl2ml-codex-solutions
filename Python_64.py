def vowels_count(s):
    vowels = 'aeiou'
    count = 0
    for i in range(len(s)):
        if s[i].lower() in vowels:
            if s[i].lower() == 'y' and i == len(s) - 1:
                count += 1
            elif s[i].lower() != 'y':
                count += 1
    return count