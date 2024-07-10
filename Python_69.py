```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num not in freq_dict:
            freq_dict[num] = 0
        freq_dict[num] += 1
    max_num = -1
    for num, freq in freq_dict.items():
        if num > 0 and freq >= num:
            max_num = num
            break
    return max_num