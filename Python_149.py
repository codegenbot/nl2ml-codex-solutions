
def sorted_list_sum(lst):
    even_words = [word for word in lst if len(word) % 2 == 0]
    odd_words = [word for word in lst if len(word) % 2 != 0]
    return sorted(even_words, key=len(word)) + sorted(odd_words, key=len(word))