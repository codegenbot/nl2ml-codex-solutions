def vowels_count(s):
    vowels = ['a', 'e', 'i', 'o', 'u']
    count = 0
    if s[-1].lower() == 'y':
        count += 1
    for char in s.lower():
        if char in vowels:
            count += 1
    return count