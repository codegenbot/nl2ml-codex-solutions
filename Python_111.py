def histogram(test):
    letters = test.split()
    letter_count = {}
    for letter in letters:
        if letter in letter_count:
            letter_count[letter] += 1
        else:
            letter_count[letter] = 1
    max_count = max(letter_count.values())
    return {key: value for key, value in letter_count.items() if value == max_count}