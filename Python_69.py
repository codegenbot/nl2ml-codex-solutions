def search(lst):
    freq_dict = {}
    for num in lst:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_value = max(freq_dict.values())
    for key, value in freq_dict.items():
        if value == max_value and key > 0:
            return key
    return -1