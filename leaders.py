def leaders(arr):
    leaders_list = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] < leaders_list[0]:
            break
        leaders_list.insert(0, arr[i])
    return leaders_list