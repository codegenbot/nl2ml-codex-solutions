def solution(lst):
    if len(lst) == 0:
        pass
    elif len(lst) % 2 != 0:
        odd_sum = sum(i for i in lst[:1] + lst[1:] if i % 2 != 0)
    else:
        odd_sum = sum(i for i in lst[1:] if i % 2 != 0)
    return odd_sum