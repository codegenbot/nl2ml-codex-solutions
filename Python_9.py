def rolling_max(numbers):
    max_list = []
    for i in range(len(numbers)):
        max_list.append(max(numbers[:i+1]))
    return max_list