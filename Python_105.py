def by_length(arr):
    return [num_to_word(num) for num in sorted(arr) if 1 <= num <= 9][::-1]

def num_to_word(num):
    words = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return words[num - 1] if 1 <= num <= 9 else ""