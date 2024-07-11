```
def search(lst):
    frequency_dict = {}
    for num in lst:
        if num in frequency_dict:
            frequency_dict[num] += 1
        else:
            frequency_dict[num] = 1
    max_num = -1
    for key, value in frequency_dict.items():
        if key > max_num and value >= key:
            max_num = key
    return max_num