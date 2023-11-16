
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    """
    find_max(["name", "enam", "game"]) == "enam"
    # Write your code here
    max_num = 0
    max_str = ''
    for word in words:
        if len(set(word)) > max_num:
            max_num = len(set(word))
            max_str = word
    return max_str

print(find_max(["name", "of", "string"]))
print(find_max(["name", "enam", "game"]))
print(find_max(["aaaaaaa", "bb" ,"cc"]))
    find_max(["aaaaaaa", "bb" ,"cc"]) == ""aaaaaaa"
