def leaders(a):
    leaders_list = [a[-1]]
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= a[-1]:
            leaders_list.append(a[i])
            a.pop()
    return reversed(leaders_list)