def sorted_list_sum(lst):
    return sum(int(i) for i in ''.join(sorted([word for word in lst if len(word) % 2 == 0], key=lambda x: (len(x), x))))